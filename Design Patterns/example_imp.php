<?php
	require_once(example_module.php);

	function example_prepare() {
		example_initialize();
	}

	function example_finish() {
		exmaple_finalize();
	}

	function example_print() {
		exmaple_printString(("Hello World");
	}
?>
