/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$Destroy
void Rotatelab_Scripts_BlasterGeneratorController__Destroy (Rotatelab_Scripts_BlasterGeneratorController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$Destroy
   void Rotatelab_Scripts_BlasterGeneratorController__Destroy
   (Rotatelab_Scripts_BlasterGeneratorController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterGeneratorController__Destroy_103b5bc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar7 = (char *)(_UNK_0104b7ec + 0x104b5dc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b7f0 + 0x104b5f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b7f4 + 0x104b5fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b7f8 + 0x104b608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b7fc + 0x104b614));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b800 + 0x104b620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b804 + 0x104b62c));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0104b808 + 0x104b648));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar4,0x1b,0);
  uVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar11 = *(undefined4 *)(param_1 + 0x58);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_58,0x1a,0);
  uVar3 = uStack_4c;
  uVar2 = uStack_50;
  uVar1 = uStack_54;
  uVar9 = uStack_58;
  if (*(int *)(**(int **)(_UNK_0104b80c + 0x104b6b0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_58,uVar5,0,uVar11,uVar9,uVar1,uVar2,uVar3,uStack_48,1,0,0,0,0,0);
  piVar10 = *(int **)(_UNK_0104b810 + 0x104b708);
  iVar4 = *piVar10;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar10;
  }
  puVar6 = *(undefined4 **)(iVar4 + 0x5c);
  iVar8 = puVar6[2];
  if (iVar8 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar9 = *puVar6;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104b814 + 0x104b75c));
    System_Action_object____ctor_1f11414(iVar8,uVar9,**(undefined4 **)(_UNK_0104b818 + 0x104b77c),0)
    ;
    piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 8);
    *piVar10 = iVar8;
    thunk_FUN_00ec5080(piVar10,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_0104b81c + 0x104b7a4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_58,&uStack_40,param_1,iVar8,0,**(undefined4 **)(_UNK_0104b820 + 0x104b7c8));
  return;
}

