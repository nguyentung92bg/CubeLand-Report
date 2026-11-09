/* IL2CPP: Rotatelab.Scripts.TweenController$$ResumeTween
void Rotatelab_Scripts_TweenController__ResumeTween (Rotatelab_Scripts_TweenController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01195510) */
/* WARNING: Removing unreachable block (ram,0x01195518) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.TweenController$$ResumeTween
   void Rotatelab_Scripts_TweenController__ResumeTween (Rotatelab_Scripts_TweenController_o* __this,
   const MethodInfo* method); */

int Rotatelab_Scripts_TweenController__ResumeTween_106c200(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar10;
  undefined4 unaff_r7;
  char *pcVar11;
  int *piVar12;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar13;
  
  iVar2 = *(int *)(param_1 + 0x10);
  pcVar11 = (char *)(_UNK_01179054 + 0x1178ee4);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01179058 + 0x1178ef8),1,0xbf800000,0);
    *pcVar11 = '\x01';
  }
  if (iVar2 == 0) {
    pcVar11 = (char *)(_UNK_0117905c + 0x1178f80);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01179060 + 0x1178f94));
      *pcVar11 = '\x01';
    }
    iVar2 = **(int **)(**(int **)(_UNK_01179064 + 0x1178fa8) + 0x5c);
    if (iVar2 < 2) {
      return iVar2;
    }
    pcVar11 = (char *)(_UNK_0118e26c + 0x118e238);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e270 + 0x118e24c),0);
      *pcVar11 = '\x01';
    }
    iVar2 = 0;
    piVar6 = (int *)**(int **)(_UNK_0118e274 + 0x118e264);
  }
  else if (*(char *)(iVar2 + 0x94) == '\0') {
    pcVar11 = (char *)(_UNK_01179068 + 0x1178fd4);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0117906c + 0x1178fe8));
      *pcVar11 = '\x01';
    }
    iVar2 = **(int **)(**(int **)(_UNK_01179070 + 0x1178ffc) + 0x5c);
    if (iVar2 < 2) {
      return iVar2;
    }
    pcVar11 = (char *)(_UNK_0118e1c8 + 0x118e194);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e1cc + 0x118e1a8),0);
      *pcVar11 = '\x01';
    }
    iVar2 = 0;
    piVar6 = (int *)**(int **)(_UNK_0118e1d0 + 0x118e1c0);
  }
  else {
    if (*(char *)(iVar2 + 0x95) == '\0') {
      if (*(int *)(**(int **)(_UNK_01179080 + 0x117901c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar11 = (char *)(_UNK_0119558c + 0x11954cc);
      if (*pcVar11 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01195590 + 0x11954e0),1,0xbf800000,0);
        *pcVar11 = '\x01';
      }
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      cVar1 = *(char *)(iVar2 + 0xb4);
      *(undefined1 *)(iVar2 + 0x1c) = 0;
      if (*(int *)(**(int **)(_UNK_01195594 + 0x1195528) + 0x74) == 0) {
        FUN_00ec3934();
      }
      DG_Tweening_Core_TweenManager__Rewind_1185598(iVar2,1);
      *(undefined1 *)(iVar2 + 0xb4) = 1;
      if ((cVar1 == '\0') && (*(char *)(iVar2 + 0xa6) != '\0')) {
        bVar13 = *(char *)(iVar2 + 0xbc) != '\0';
        iVar3 = 0;
        if (bVar13) {
          iVar3 = *(int *)(iVar2 + 0x38);
        }
        if (bVar13 && iVar3 != 0) {
          DG_Tweening_Tween__OnTweenCallback_116b034(iVar3,iVar2,0);
        }
      }
      return 1;
    }
    pcVar11 = (char *)(_UNK_01179074 + 0x1178f2c);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01179078 + 0x1178f40));
      *pcVar11 = '\x01';
    }
    iVar3 = **(int **)(**(int **)(_UNK_0117907c + 0x1178f54) + 0x5c);
    if (iVar3 < 2) {
      return iVar3;
    }
    pcVar11 = (char *)(_UNK_0118e21c + 0x118e1e8);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e220 + 0x118e1fc),0);
      *pcVar11 = '\x01';
    }
    piVar6 = (int *)**(int **)(_UNK_0118e224 + 0x118e214);
  }
  pcVar11 = (char *)(_UNK_0118da34 + 0x118d898);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da38 + 0x118d8ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da3c + 0x118d8b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da40 + 0x118d8c4));
    *pcVar11 = '\x01';
  }
  piVar12 = *(int **)(_UNK_0118da44 + 0x118d8d8);
  iVar3 = *piVar12;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar12;
  }
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x31) == '\0') {
    uVar4 = **(undefined4 **)(_UNK_0118da4c + 0x118d948);
    if (piVar6 == (int *)0x0) {
      uVar10 = 0;
    }
    else {
      pcVar8 = *(code **)(*piVar6 + 0xd8);
      uVar10 = *(undefined4 *)(*piVar6 + 0xdc);
      uVar10 = (*pcVar8)(piVar6,uVar10,pcVar8,uVar10,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r11,
                         unaff_lr);
    }
    uVar4 = System_String__Concat_29fee38(uVar4,uVar10,0);
  }
  else {
    uVar4 = DG_Tweening_Core_Debugger__GetDebugDataMessage_117da54(iVar2);
    uVar10 = **(undefined4 **)(_UNK_0118da48 + 0x118d918);
    if (piVar6 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*piVar6 + 0xd8))(piVar6,*(undefined4 *)(*piVar6 + 0xdc));
    }
    uVar4 = System_String__Concat_2a0b574(uVar10,uVar4,uVar5,0);
  }
  iVar2 = *piVar12;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar12;
  }
  iVar3 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x2c);
  if (iVar3 != 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *(int *)(*(int *)(*piVar12 + 0x5c) + 0x2c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    iVar2 = (**(code **)(iVar3 + 0xc))
                      (*(undefined4 *)(iVar3 + 0x20),2,uVar4,*(undefined4 *)(iVar3 + 0x14));
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (*(int *)(**(int **)(_UNK_0118da50 + 0x118da0c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar11 = (char *)(_UNK_035c01b0 + 0x35c00a4);
  if (*pcVar11 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b4 + 0x35c00b8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b8 + 0x35c00c4));
    *pcVar11 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035c01bc + 0x35c00d8);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar11 = (char *)(_UNK_035c01c0 + 0x35c00f4);
  if (*pcVar11 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
    *pcVar11 = '\x01';
  }
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar2 = *piVar6;
  }
  piVar6 = *(int **)(*(int *)(iVar2 + 0x5c) + 4);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar6;
  uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar9 != 0) {
    piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar12[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
        puVar7 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xd8);
        goto LAB_035c0194;
      }
      uVar9 = uVar9 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*(code *)*puVar7)(piVar6,2,uVar4,puVar7[1]);
  return iVar2;
}

