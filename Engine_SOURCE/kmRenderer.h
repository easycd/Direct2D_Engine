#pragma once
#include "GameEngine.h"
#include "kmGraphicDevice_Dx11.h"

using namespace km::math;
namespace km::renderer
{
	struct Vertex
	{
		Vector3 pos;
		Vector4 color;
	};

	extern Vertex vertexes[];
	extern ID3D11InputLayout* triangleLayout;

	extern ID3D11Buffer* triangleBuffer;
	extern ID3D11Buffer* triangleIdxBuffer;
	extern ID3D11Buffer* triangleConstantBuffer;

	extern ID3DBlob* errorBlob;
	extern ID3DBlob* triangleVSBlob;
	extern ID3D11VertexShader* triangleVSShader;
	extern ID3DBlob* trianglePSBlob;
	extern ID3D11PixelShader* trianglePSShader;

	void Initialize();
}
