/* IL2CPP: Rotatelab.Scripts.TweenController$$OnDisable
void Rotatelab_Scripts_TweenController__OnDisable (Rotatelab_Scripts_TweenController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0119561c) */
/* WARNING: Removing unreachable block (ram,0x0119562c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.TweenController$$OnDisable
   void Rotatelab_Scripts_TweenController__OnDisable (Rotatelab_Scripts_TweenController_o* __this,
   const MethodInfo* method); */

uint Rotatelab_Scripts_TweenController__OnDisable_106c240(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  code *pcVar9;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  
  iVar2 = *(int *)(param_1 + 0x10);
  pcVar10 = (char *)(_UNK_01179208 + 0x117909c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117920c + 0x11790b0),1,0);
    *pcVar10 = '\x01';
  }
  if (iVar2 == 0) {
    pcVar10 = (char *)(_UNK_01179210 + 0x1179138);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01179214 + 0x117914c));
      *pcVar10 = '\x01';
    }
    uVar3 = **(uint **)(**(int **)(_UNK_01179218 + 0x1179160) + 0x5c);
    if ((int)uVar3 < 2) {
      return uVar3;
    }
    pcVar10 = (char *)(_UNK_0118e26c + 0x118e238);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e270 + 0x118e24c),0);
      *pcVar10 = '\x01';
    }
    iVar2 = 0;
    piVar7 = (int *)**(int **)(_UNK_0118e274 + 0x118e264);
  }
  else if (*(char *)(iVar2 + 0x94) == '\0') {
    pcVar10 = (char *)(_UNK_0117921c + 0x117918c);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01179220 + 0x11791a0));
      *pcVar10 = '\x01';
    }
    uVar3 = **(uint **)(**(int **)(_UNK_01179224 + 0x11791b4) + 0x5c);
    if ((int)uVar3 < 2) {
      return uVar3;
    }
    pcVar10 = (char *)(_UNK_0118e1c8 + 0x118e194);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e1cc + 0x118e1a8),0);
      *pcVar10 = '\x01';
    }
    iVar2 = 0;
    piVar7 = (int *)**(int **)(_UNK_0118e1d0 + 0x118e1c0);
  }
  else {
    if (*(char *)(iVar2 + 0x95) == '\0') {
      if (*(int *)(**(int **)(_UNK_01179234 + 0x11791d4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar10 = (char *)(_UNK_011956d8 + 0x11955b4);
      if (*pcVar10 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_011956dc + 0x11955c8),1,0);
        *pcVar10 = '\x01';
      }
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = 0;
      cVar1 = *(char *)(iVar2 + 0xb4);
      *(undefined1 *)(iVar2 + 0xb4) = 0;
      if (0.0 < *(float *)(iVar2 + 0x6c)) {
        fVar15 = *(float *)(iVar2 + 0xb8);
        *(undefined4 *)(iVar2 + 0xb8) = 0;
        uVar3 = (uint)(0.0 < fVar15);
        *(undefined1 *)(iVar2 + 0xbc) = 0;
      }
      fVar15 = *(float *)(iVar2 + 0xa8);
      bVar13 = fVar15 < 0.0;
      bVar14 = fVar15 == 0.0;
      if (fVar15 <= 0.0) {
        bVar13 = *(int *)(iVar2 + 0xb0) < 0;
        bVar14 = *(int *)(iVar2 + 0xb0) == 0;
      }
      if ((bVar14 || bVar13 != ((fVar15 != 0.0 && fVar15 >= 0.0) && NAN(fVar15))) &&
         (*(char *)(iVar2 + 0xa5) != '\0')) {
        if (*(int *)(**(int **)(_UNK_011956e0 + 0x11956b0) + 0x74) == 0) {
          FUN_00ec3934();
        }
        DG_Tweening_Core_TweenManager__ManageOnRewindCallbackWhenAlreadyRewinded_1185898(iVar2,0);
      }
      else {
        uVar3 = 1;
        iVar4 = DG_Tweening_Tween__DoGoto_116d1fc(iVar2,0,0,1,0);
        if ((cVar1 != '\0') && ((iVar4 == 0 && (*(int *)(iVar2 + 0x3c) != 0)))) {
          DG_Tweening_Tween__OnTweenCallback_116b034(*(int *)(iVar2 + 0x3c),iVar2,0);
        }
      }
      return uVar3;
    }
    pcVar10 = (char *)(_UNK_01179228 + 0x11790e4);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0117922c + 0x11790f8));
      *pcVar10 = '\x01';
    }
    uVar3 = **(uint **)(**(int **)(_UNK_01179230 + 0x117910c) + 0x5c);
    if ((int)uVar3 < 2) {
      return uVar3;
    }
    pcVar10 = (char *)(_UNK_0118e21c + 0x118e1e8);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e220 + 0x118e1fc),0);
      *pcVar10 = '\x01';
    }
    piVar7 = (int *)**(int **)(_UNK_0118e224 + 0x118e214);
  }
  pcVar10 = (char *)(_UNK_0118da34 + 0x118d898);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da38 + 0x118d8ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da3c + 0x118d8b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da40 + 0x118d8c4));
    *pcVar10 = '\x01';
  }
  piVar12 = *(int **)(_UNK_0118da44 + 0x118d8d8);
  iVar4 = *piVar12;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar12;
  }
  if (*(char *)(*(int *)(iVar4 + 0x5c) + 0x31) == '\0') {
    uVar5 = **(undefined4 **)(_UNK_0118da4c + 0x118d948);
    if (piVar7 == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      pcVar9 = *(code **)(*piVar7 + 0xd8);
      uVar11 = *(undefined4 *)(*piVar7 + 0xdc);
      uVar11 = (*pcVar9)(piVar7,uVar11,pcVar9,uVar11,unaff_r4,unaff_r5,unaff_r6);
    }
    uVar5 = System_String__Concat_29fee38(uVar5,uVar11,0);
  }
  else {
    uVar5 = DG_Tweening_Core_Debugger__GetDebugDataMessage_117da54(iVar2);
    uVar11 = **(undefined4 **)(_UNK_0118da48 + 0x118d918);
    if (piVar7 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*piVar7 + 0xd8))(piVar7,*(undefined4 *)(*piVar7 + 0xdc));
    }
    uVar5 = System_String__Concat_2a0b574(uVar11,uVar5,uVar6,0);
  }
  iVar2 = *piVar12;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar12;
  }
  iVar4 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x2c);
  if (iVar4 != 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *(int *)(*(int *)(*piVar12 + 0x5c) + 0x2c);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    iVar2 = (**(code **)(iVar4 + 0xc))
                      (*(undefined4 *)(iVar4 + 0x20),2,uVar5,*(undefined4 *)(iVar4 + 0x14));
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (*(int *)(**(int **)(_UNK_0118da50 + 0x118da0c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar10 = (char *)(_UNK_035c01b0 + 0x35c00a4);
  if (*pcVar10 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b4 + 0x35c00b8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b8 + 0x35c00c4));
    *pcVar10 = '\x01';
  }
  piVar7 = *(int **)(_UNK_035c01bc + 0x35c00d8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar10 = (char *)(_UNK_035c01c0 + 0x35c00f4);
  if (*pcVar10 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
    *pcVar10 = '\x01';
  }
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar2 = *piVar7;
  }
  piVar7 = *(int **)(*(int *)(iVar2 + 0x5c) + 4);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar12[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
        puVar8 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xd8);
        goto LAB_035c0194;
      }
      uVar3 = uVar3 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar3 != 0);
  }
  puVar8 = (undefined4 *)thunk_FUN_00efdb38(piVar7,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar8)(piVar7,2,uVar5,puVar8[1]);
  return uVar3;
}

