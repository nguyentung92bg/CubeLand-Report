/* IL2CPP: Rotatelab.Scripts.JewelController.<>c__DisplayClass10_0$$<Collect>b__1
void Rotatelab_Scripts_JewelController___c__DisplayClass10_0___Collect_b__1 (Rotatelab_Scripts_JewelController___c__DisplayClass10_0_o* __this, Rotatelab_Scripts_JewelController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.JewelController.<>c__DisplayClass10_0$$<Collect>b__1
   void Rotatelab_Scripts_JewelController___c__DisplayClass10_0___Collect_b__1
   (Rotatelab_Scripts_JewelController___c__DisplayClass10_0_o* __this,
   Rotatelab_Scripts_JewelController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_JewelController___c__DisplayClass10_0___Collect_b__1_1013320
               (int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar10 = (char *)(_UNK_010235b4 + 0x1023344);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010235b8 + 0x1023358));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010235bc + 0x1023364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010235c0 + 0x1023370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010235c4 + 0x102337c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010235c8 + 0x1023388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010235cc + 0x1023394));
    *pcVar10 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010235d0 + 0x10233b0));
  System_Object___ctor_2bb93bc(iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar12 = (int *)(iVar5 + 8);
  *piVar12 = param_2;
  thunk_FUN_00ec5080(piVar12,param_2);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010235d4 + 0x10233f0));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(iVar6 + 0x10);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar14 = (**(code **)(*piVar9 + 0xf0))(piVar9,*(undefined4 *)(*piVar9 + 0xf4));
  iVar11 = *(int *)(param_1 + 0x30);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010235d8 + 0x1023440));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = Rotatelab_Debugging_CreativeCanvasController__get_JewelIncreaseAmountOfPerBlasterJewel_110b108
                    (iVar6,0);
  uVar7 = iVar6 * iVar11;
  uVar8 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))
            (piVar9,uVar8,(uint)uVar14 + uVar7,
             (int)((ulonglong)uVar14 >> 0x20) + ((int)uVar7 >> 0x1f) +
             (uint)CARRY4((uint)uVar14,uVar7),uVar8);
  if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*piVar12 + 0x10);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = UnityEngine_Component__get_transform_35fe190(iVar6,0);
  if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar13 = *(undefined4 *)(*piVar12 + 0x30);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_58,0x1a,0);
  uVar4 = uStack_4c;
  uVar3 = uStack_50;
  uVar2 = uStack_54;
  uVar1 = uStack_58;
  if (*(int *)(**(int **)(_UNK_010235dc + 0x10234ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_58,uVar8,0,uVar13,uVar1,uVar2,uVar3,uVar4,uStack_48,1,0,0,0,0,0);
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010235e0 + 0x1023564));
  System_Action___ctor_2b10bac(uVar8,iVar5,**(undefined4 **)(_UNK_010235e4 + 0x1023580),0);
  PrimeTween_Tween__OnComplete_2ceddf8(auStack_68,&uStack_40,uVar8,0,0);
  return;
}

