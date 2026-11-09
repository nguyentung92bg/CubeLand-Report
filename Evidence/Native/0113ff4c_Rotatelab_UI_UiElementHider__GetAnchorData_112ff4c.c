/* IL2CPP: Rotatelab.UI.UiElementHider$$GetAnchorData
Rotatelab_UI_UiElementHider_AnchorData_o* Rotatelab_UI_UiElementHider__GetAnchorData (Rotatelab_UI_UiElementHider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UiElementHider$$GetAnchorData
   Rotatelab_UI_UiElementHider_AnchorData_o* Rotatelab_UI_UiElementHider__GetAnchorData
   (Rotatelab_UI_UiElementHider_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_UI_UiElementHider__GetAnchorData_112ff4c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01140080 + 0x113ff60);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140084 + 0x113ff74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140088 + 0x113ff80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114008c + 0x113ff8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140090 + 0x113ff98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140094 + 0x113ffa4));
    *pcVar3 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01140098 + 0x113ffb8);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar2[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114009c + 0x1140008));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar6,uVar7,**(undefined4 **)(_UNK_011400a0 + 0x1140028),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_011400a4 + 0x1140050) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = **(int **)(_UNK_011400a8 + 0x1140074);
  if ((*(int *)(iVar1 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01496d18 + 0x1496cac)), *(int *)(iVar1 + 0x1c) == 0)) {
    FUN_00efd7c4(iVar1);
  }
  uStack_1c = 0;
  if (*(int *)(**(int **)(_UNK_01496d1c + 0x1496cd0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_object__Int32Enum__1489bc8
                    (uVar4,uVar5,iVar6,&uStack_1c,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0xc));
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = uStack_1c;
  }
  return uVar4;
}

