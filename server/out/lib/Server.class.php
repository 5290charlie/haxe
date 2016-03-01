<?php

class Server {
	public function __construct() {}
	public function foo($x, $y) { if(!php_Boot::$skip_constructor) {
		return $x + $y;
	}}
	public function submit($score) {
		if($score > Server::$high_score) {
			Server::$high_score = $score;
			return "New High Score!";
		} else {
			return "Keep Trying!";
		}
	}
	static $high_score = 0;
	static function main() {
		$ctx = new haxe_remoting_Context();
		$ctx->addObject("Server", new Server(), null);
		if(haxe_remoting_HttpConnection::handleRequest($ctx)) {
			return;
		}
		haxe_Log::trace("This is a remoting server !", _hx_anonymous(array("fileName" => "Server.hx", "lineNumber" => 25, "className" => "Server", "methodName" => "main")));
	}
	function __toString() { return 'Server'; }
}
