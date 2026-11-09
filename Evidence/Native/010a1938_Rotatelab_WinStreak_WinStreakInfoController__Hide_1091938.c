/* IL2CPP: Rotatelab.WinStreak.WinStreakInfoController$$Hide
void Rotatelab_WinStreak_WinStreakInfoController__Hide (Rotatelab_WinStreak_WinStreakInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakInfoController$$Hide
   void Rotatelab_WinStreak_WinStreakInfoController__Hide
   (Rotatelab_WinStreak_WinStreakInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakInfoController__Hide_1091938(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_r1;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar3 = (char *)(_UNK_010a1b88 + 0x10a1950);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a1b8c + 0x10a1964));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a1b90 + 0x10a1970));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a1b94 + 0x10a197c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a1b98 + 0x10a1988));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a1b9c + 0x10a1994));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a1ba0 + 0x10a19a0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  if (*(int *)(**(int **)(_UNK_010a1ba4 + 0x10a19ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_50,uVar5,0,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_50,&uStack_30,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  uVar5 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  piVar7 = *(int **)(_UNK_010a1ba8 + 0x10a1a94);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar4 = puVar2[1];
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar2;
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a1bac + 0x10a1adc));
    System_Action_object____ctor_1f11414(iVar4,uVar6,**(undefined4 **)(_UNK_010a1bb0 + 0x10a1afc),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar4;
    thunk_FUN_00ec5080(piVar7,iVar4);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_40,&uStack_30,uVar5,iVar4,0,**(undefined4 **)(_UNK_010a1bb4 + 0x10a1b34));
  iVar1 = *(int *)(**(int **)(_UNK_010a1bb8 + 0x10a1b50) + 0x74);
  if (iVar1 == 0) {
    FUN_00ec3934();
    iVar1 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_40,iVar1,uStack_40,uStack_3c,uStack_38,uStack_34,0);
  return;
}

