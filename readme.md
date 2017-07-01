# CarRace
+ 概要
	- カーレースを開催するためのクラス。

+ Class
	- MonacoGrandPrix Car/MonacograndPrix.hpp
		* モナコGPを開催できるクラス
	- Car Car/Car.cpp
		* 出走のための車に必要なfunctions が定義された抽象クラス
	- Prius Ferrari Car/Prius.cpp
		* 上記の実装
+ Problems
	- 作りが甘い	
		* マーシャルがアクセルとかブレーキの指示出すって意味わかんないし。
		* まあ加速度で勝負決めてる時点で終わってるけど。
	- namespace で囲んでない
		* めんどくさいからエターで。
