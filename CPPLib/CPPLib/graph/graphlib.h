/**
 * 有向グラフライブラリ
 **/
#pragma once
#include <vector>

/** ベクトルノード構造体(始点, 終点, 重み) **/
typedef struct
{
	int source ;
	int target ;
	int weight ;
} VectorGraphNode ;

/** 有向グラフクラス **/
class VectorGraph
{
private:
	std::vector<VectorGraphNode> nodes;

public:
	void   AddNode( VectorGraphNode x ) ;
	void   RemoveNode( int index ) ;
	int    SearchWay( int source, int target ) ;
} ;

/* Dijkstra library */