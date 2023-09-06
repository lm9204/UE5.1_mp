// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuSystem/ServerRow.h"

#include "Button.h"
#include "MainMenu.h"


void UServerRow::Setup(UMainMenu *InParent, uint32 InIndex)
{
	Parent = InParent;
	Index = InIndex;
	RowButton->OnClicked.AddDynamic(this, &UServerRow::OnClicked);
}

void UServerRow::OnClicked()
{
	Parent->SelectIndex(Index);
}

