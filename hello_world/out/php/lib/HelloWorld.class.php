<?php

class HelloWorld {
	public function __construct(){}
	static function main() {
		haxe_Log::trace("Hello World", _hx_anonymous(array("fileName" => "HelloWorld.hx", "lineNumber" => 3, "className" => "HelloWorld", "methodName" => "main")));
	}
	function __toString() { return 'HelloWorld'; }
}
