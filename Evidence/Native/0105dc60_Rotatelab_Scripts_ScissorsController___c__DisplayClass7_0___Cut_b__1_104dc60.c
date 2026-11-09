/* IL2CPP: Rotatelab.Scripts.ScissorsController.<>c__DisplayClass7_0$$<Cut>b__1
void Rotatelab_Scripts_ScissorsController___c__DisplayClass7_0___Cut_b__1 (Rotatelab_Scripts_ScissorsController___c__DisplayClass7_0_o* __this, Rotatelab_Scripts_ScissorsController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ScissorsController.<>c__DisplayClass7_0$$<Cut>b__1
   void Rotatelab_Scripts_ScissorsController___c__DisplayClass7_0___Cut_b__1
   (Rotatelab_Scripts_ScissorsController___c__DisplayClass7_0_o* __this,
   Rotatelab_Scripts_ScissorsController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_ScissorsController___c__DisplayClass7_0___Cut_b__1_104dc60(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_GiftWrapperController__AnimateCut_100ee70(*(int *)(param_1 + 8),0);
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar5 = (char *)(_UNK_0101f5c8 + 0x101f33c);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101f5cc + 0x101f350),0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101f5d0 + 0x101f35c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101f5d4 + 0x101f368));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101f5d8 + 0x101f374));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101f5dc + 0x101f380));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101f5e0 + 0x101f38c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101f5e4 + 0x101f398));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101f5e8 + 0x101f3a4));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piVar8 = *(int **)(_UNK_0101f5ec + 0x101f3c0);
    uVar9 = *(undefined4 *)(iVar4 + 0x2c);
    uStack_30 = 0;
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar8;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x5c);
    iVar6 = puVar3[1];
    if (iVar6 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar7 = *puVar3;
      iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101f5f0 + 0x101f410));
      System_Action_object__float____ctor_1f19254
                (iVar6,uVar7,**(undefined4 **)(_UNK_0101f5f4 + 0x101f430),0);
      piVar2 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
      *piVar2 = iVar6;
      thunk_FUN_00ec5080(piVar2,iVar6);
    }
    if (*(int *)(**(int **)(_UNK_0101f5f8 + 0x101f458) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_object__15d5b3c
              (&uStack_40,iVar4,0,0x42c80000,uVar9,iVar6,0,0,0,0,0,1,0,0,0,0,
               **(undefined4 **)(_UNK_0101f5fc + 0x101f488));
    PrimeTween_Sequence__Create_2cedfd8
              (&uStack_40,uStack_34,uStack_40,uStack_3c,uStack_38,uStack_34,0);
    iVar1 = *piVar8;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar8;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x5c);
    iVar6 = puVar3[2];
    if (iVar6 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar9 = *puVar3;
      iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101f600 + 0x101f538));
      System_Action_object____ctor_1f11414
                (iVar6,uVar9,**(undefined4 **)(_UNK_0101f604 + 0x101f558),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
      *piVar8 = iVar6;
      thunk_FUN_00ec5080(piVar8,iVar6);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_40,&uStack_30,iVar4,iVar6,0,**(undefined4 **)(_UNK_0101f608 + 0x101f58c));
    Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
              (&uStack_40,uStack_34,uStack_40,uStack_3c,uStack_38,uStack_34,0);
    return;
  }
  return;
}

