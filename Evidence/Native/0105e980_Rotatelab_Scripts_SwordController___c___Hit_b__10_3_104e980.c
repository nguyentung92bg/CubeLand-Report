/* IL2CPP: Rotatelab.Scripts.SwordController.<>c$$<Hit>b__10_3
void Rotatelab_Scripts_SwordController___c___Hit_b__10_3 (Rotatelab_Scripts_SwordController___c_o* __this, Rotatelab_Scripts_SwordController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SwordController.<>c$$<Hit>b__10_3
   void Rotatelab_Scripts_SwordController___c___Hit_b__10_3
   (Rotatelab_Scripts_SwordController___c_o* __this, Rotatelab_Scripts_SwordController_o* this,
   const MethodInfo* method); */

void Rotatelab_Scripts_SwordController___c___Hit_b__10_3_104e980(undefined4 param_1,int param_2)

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
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_0105e8c4 + 0x105e6f8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e8c8 + 0x105e70c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e8cc + 0x105e718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e8d0 + 0x105e724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e8d4 + 0x105e730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e8d8 + 0x105e73c));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uVar4 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,9,0);
  uVar3 = uStack_44;
  uVar2 = uStack_48;
  uVar1 = uStack_4c;
  uVar10 = uStack_50;
  if (*(int *)(**(int **)(_UNK_0105e8dc + 0x105e78c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_50,uVar4,0,0x3e800000,uVar10,uVar1,uVar2,uVar3,uStack_40,1,0,0,0,0,0);
  piVar8 = *(int **)(_UNK_0105e8e0 + 0x105e7ec);
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
  iVar9 = puVar6[2];
  if (iVar9 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar10 = *puVar6;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105e8e4 + 0x105e83c));
    System_Action_object____ctor_1f11414
              (iVar9,uVar10,**(undefined4 **)(_UNK_0105e8e8 + 0x105e85c),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
    *piVar8 = iVar9;
    thunk_FUN_00ec5080(piVar8,iVar9);
  }
  if (*(int *)(**(int **)(_UNK_0105e8ec + 0x105e884) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_50,&uStack_38,param_2,iVar9,0,**(undefined4 **)(_UNK_0105e8f0 + 0x105e8a4));
  return;
}

