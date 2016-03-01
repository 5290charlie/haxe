
import luxe.Vector;
import luxe.Input;
import luxe.Text;
import luxe.Color;
import luxe.tween.Actuate;

import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.phys.Material;
import nape.shape.Polygon;
import nape.shape.Circle;

import phoenix.geometry.CircleGeometry;

import luxe.physics.nape.DebugDraw;

class Main extends luxe.Game {
  var test : Body;
  var ball : Body;
  var drawer : DebugDraw;
  var circle   : CircleGeometry;

  var impulse = 100;

  var elapsed : Float;
  var last_row : Body;

  var w : Int;
  var h : Int;

  var ball_size = 25;

  var status : Text;

  var wall : Material;

  override function config(config:luxe.AppConfig) {

  return config;

  } //config

  override function ready() {
    elapsed = 0.0;

    if(drawer != null) {
      drawer.destroy();
      drawer = null;
    }

    drawer = new DebugDraw();
    Luxe.physics.nape.debugdraw = drawer;
    Luxe.physics.nape.space.gravity.y = 5000;

    w = Luxe.screen.w;
    h = Luxe.screen.h;

    var border = new Body(BodyType.STATIC);

    wall = new Material(0, 0, 0, 0, 0);

    border.shapes.add(new Polygon(Polygon.rect(0, h, w, 1)));

    border.shapes.add(new Polygon(Polygon.rect(0, 0, -1, h), wall));
    border.shapes.add(new Polygon(Polygon.rect(w, 0, 1, h), wall));

    border.space = Luxe.physics.nape.space;

    drawer.add(border);

    ball = new Body(BodyType.DYNAMIC);
    ball.shapes.add(new Circle(ball_size));
    ball.position.setxy(w/2, h / 2);
    ball.angularVel = 0;
    ball.space = Luxe.physics.nape.space;
    ball.inertia = .01;

    ball.rollingImpulse(border, true);

    drawer.add(ball);

    Luxe.input.bind_key('left', Key.key_a);
    Luxe.input.bind_key('left', Key.left);

    Luxe.input.bind_key('right', Key.key_d);
    Luxe.input.bind_key('right', Key.right);

    var red = new Color().rgb(0xf6007b);
    var _size = 16.0;
      var _y = 10;
      var _x = 10;

    status = new Text({
                no_scene : true,
                text : "Time: ", align : left,
                pos : new Vector(_x, _y),
                point_size : _size,
                color: red
            });
    do_stuff();

  } //ready

  override function onkeyup( e:KeyEvent ) {
    if(e.keycode == Key.escape) {
      Luxe.shutdown();
    }

  } //onkeyup

  override function update(dt:Float) {
    elapsed += dt;

    status.text = 'Time: $elapsed';

    if (ball.position.y < 0) {
      Luxe.shutdown();
    }

    if (last_row.position.y < (h-200)) {
      do_stuff();
    }

    if(Luxe.input.inputdown('left')) {
      ball.applyImpulse(new Vec2(-impulse, 0), ball.position);
    } else if(Luxe.input.inputdown('right')) {
      ball.applyImpulse(new Vec2(impulse, 0), ball.position);
    }
  } //update

function do_stuff() {
  var d = ball_size * 4;
  var used = 0.0;

  var row = new Body();

  row.allowMovement = false;
  row.allowRotation = false;

  while (used < (w-d)) {
    var block_width = Math.random() * ((w/2) - d) + d;

    row.shapes.add(new Polygon(Polygon.rect(used, h, block_width, 20)));

    used += (block_width + d);
  }

  row.space = Luxe.physics.nape.space;
  row.align();
  row.velocity = new Vec2(0,-(impulse+elapsed)*2);

  drawer.add(row);

  last_row = row;
}

} //Main
