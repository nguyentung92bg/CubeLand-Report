/* IL2CPP: Rotatelab.Scripts.ScissorsController$$Destroy
void Rotatelab_Scripts_ScissorsController__Destroy (Rotatelab_Scripts_ScissorsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ScissorsController$$Destroy
   void Rotatelab_Scripts_ScissorsController__Destroy (Rotatelab_Scripts_ScissorsController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ScissorsController__Destroy_104d8a8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_0105da8c + 0x105d8c0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105da90 + 0x105d8d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105da94 + 0x105d8e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105da98 + 0x105d8ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105da9c + 0x105d8f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105daa0 + 0x105d904));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,9,0);
  uVar3 = uStack_44;
  uVar2 = uStack_48;
  uVar1 = uStack_4c;
  uVar10 = uStack_50;
  if (*(int *)(**(int **)(_UNK_0105daa4 + 0x105d954) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_50,uVar4,0,0x3e800000,uVar10,uVar1,uVar2,uVar3,uStack_40,1,0,0,0,0,0);
  piVar8 = *(int **)(_UNK_0105daa8 + 0x105d9b4);
  iVar5 = *piVar8;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar8;
  }
  puVar6 = *(undefined4 **)(iVar5 + 0x5c);
  iVar9 = puVar6[3];
  if (iVar9 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar10 = *puVar6;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105daac + 0x105da04));
    System_Action_object____ctor_1f11414
              (iVar9,uVar10,**(undefined4 **)(_UNK_0105dab0 + 0x105da24),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
    *piVar8 = iVar9;
    thunk_FUN_00ec5080(piVar8,iVar9);
  }
  if (*(int *)(**(int **)(_UNK_0105dab4 + 0x105da4c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_50,&uStack_38,param_1,iVar9,0,**(undefined4 **)(_UNK_0105dab8 + 0x105da6c));
  return;
}

