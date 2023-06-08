#include "kmGameObject.h"
#include "kmRenderer.h"
#include "kmGraphicDevice_Dx11.h"

namespace km
{
	GameObject::GameObject()
		:mState(eState::Active)
	{
	}

	GameObject::~GameObject()
	{
	}

	void GameObject::Initialize()
	{
	}

	void GameObject::Update()
	{
		//�� �����ӱ���, ����

	}

	void GameObject::LateUpdate()
	{
	}

	void GameObject::Render()
	{
		//������۷� ��ġ���� ũ�� ����, ����, ������Ʈ ������Ѵ�.
		renderer::mesh->BindBuffer();
		renderer::shader->Binds();
		graphics::GetDevice()->DrawIndexed(renderer::mesh->GetIndexCount(), 0, 0);
	}
}