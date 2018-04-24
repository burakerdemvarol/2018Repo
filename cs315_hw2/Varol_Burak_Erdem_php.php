<!--these code has same system with python all things explained in python. Just syntax is different.-->
<html>
<head><h2>=Assignment2 PHP Program=</h2></head>
<body>
	<?php
		function func1($a=42,$b=55){
			return  $a + $b;
		}
		
		echo  "\r\n1.Parameter Default Values";
		echo  "\r\nResult : ".func1()."\r\n";
		echo  "\r\n2.Variable Number of Actual Parameter";
		echo  "\r\nResult : ".func1(1,2)."\r\n";
		echo  "\r\n3.Keyword ";
		echo  "\r\nResult : " . func1(3) . "\r\n";
		echo  "\r\n4.Positional";
		echo  "\r\nResult : ".func1(2,1)."\r\n";
		echo  "\r\n5.Combination";
		echo  "\r\nResult : ".func1(3+5,5-3)."\r\n";
		function func2($a, $b){
			return  $a.",".$b;	
		}
		function func3($a, $b){
			return  $a[0].",".$b[0];
		}
		$t = 35;
		$l = 50;
		echo  "\r\n6.Pass by Value";	
		echo  "\r\nResult : " . func2($t,$l) . "\r\n";
		$c = [15];
		$d = [25];
		echo  "\r\n7.Pass by Reference ";
		echo  "\r\nResult c and d :" . func3($c,$d) . "\r\n";
	?>
</body>
</html>

