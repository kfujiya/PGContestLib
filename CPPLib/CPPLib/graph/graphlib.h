/**
 * �L���O���t���C�u����
 **/
#pragma once
#include <vector>

/** �x�N�g���m�[�h�\����(�n�_, �I�_, �d��) **/
typedef struct
{
	int source ;
	int target ;
	int weight ;
} VectorGraphNode ;

/** �L���O���t�N���X **/
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