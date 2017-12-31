////////////////////////////////////////////////////////////////////////////////
// Filename: lightclass.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _LIGHTCLASS_H_
#define _LIGHTCLASS_H_


//////////////
// INCLUDES //
//////////////
#include <DirectXMath.h>


////////////////////////////////////////////////////////////////////////////////
// Class name: LightClass
////////////////////////////////////////////////////////////////////////////////
class LightClass
{
public:
	LightClass();
	LightClass(const LightClass&);
	~LightClass();

	void SetDirection(float, float, float);
	void SetPosition(float, float, float);
	void SetLookAt(float, float, float);

	DirectX::XMFLOAT3 GetDirection();
	DirectX::XMFLOAT3 GetPosition();

	void GenerateViewMatrix();
	void GenerateProjectionMatrix(float, float);
	void GenerateOrthoMatrix(float, float, float, float);

	void GetViewMatrix(DirectX::XMMATRIX &);
	void GetProjectionMatrix(DirectX::XMMATRIX &);
	void GetOrthoMatrix(DirectX::XMMATRIX &);

private:
	DirectX::XMFLOAT3 m_direction, m_position, m_lookAt;
	DirectX::XMMATRIX  m_viewMatrix, m_projectionMatrix, m_orthoMatrix;
};

#endif