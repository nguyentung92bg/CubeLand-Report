/* IL2CPP: Rotatelab.UI.AlertTextController$$GetHideSequence
PrimeTween_Sequence_o Rotatelab_UI_AlertTextController__GetHideSequence (Rotatelab_UI_AlertTextController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.AlertTextController$$GetHideSequence
   PrimeTween_Sequence_o Rotatelab_UI_AlertTextController__GetHideSequence
   (Rotatelab_UI_AlertTextController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_AlertTextController__GetHideSequence_1116314(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01126524 + 0x1126330);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126528 + 0x1126344));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112652c + 0x1126350));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126530 + 0x112635c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126534 + 0x1126368));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126538 + 0x1126374));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  if (*(int *)(**(int **)(_UNK_0112653c + 0x11263c0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_50,uVar4,0,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_50,&uStack_30,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  uVar4 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
  piVar6 = *(int **)(_UNK_01126540 + 0x1126468);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar2[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar5 = *puVar2;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01126544 + 0x11264b0));
    System_Action_object____ctor_1f11414(iVar7,uVar5,**(undefined4 **)(_UNK_01126548 + 0x11264d0),0)
    ;
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar7;
    thunk_FUN_00ec5080(piVar6,iVar7);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_40,&uStack_30,uVar4,iVar7,0,**(undefined4 **)(_UNK_0112654c + 0x1126500));
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  return;
}

