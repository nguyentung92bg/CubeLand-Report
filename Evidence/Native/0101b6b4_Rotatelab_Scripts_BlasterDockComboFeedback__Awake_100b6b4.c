/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$Awake
void Rotatelab_Scripts_BlasterDockComboFeedback__Awake (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$Awake
   void Rotatelab_Scripts_BlasterDockComboFeedback__Awake
   (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockComboFeedback__Awake_100b6b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float fVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_3c;
  
  pcVar5 = (char *)(_UNK_0101b978 + 0x101b6d4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b97c + 0x101b6e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b980 + 0x101b6f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b984 + 0x101b700));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b988 + 0x101b70c));
    *pcVar5 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + 0xc);
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_0101b98c + 0x101b74c),uVar6);
  *(int *)(param_1 + 0x14) = iVar1;
  thunk_FUN_00ec5080();
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_0101b990 + 0x101b77c),uVar6);
  *(int *)(param_1 + 0x18) = iVar1;
  thunk_FUN_00ec5080();
  uVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_0101b994 + 0x101b7a4),uVar6);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  thunk_FUN_00ec5080();
  if (0 < (int)uVar6) {
    uVar10 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x10);
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar1 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_GameObject__GetComponentsInChildren_object__1491068
                        (iVar1,1,**(undefined4 **)(_UNK_0101b998 + 0x101b814));
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar8 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      puVar3 = (undefined4 *)(iVar8 + uVar10 * 4 + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_00ec5080(puVar3,uVar2);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar11 = 0;
      iVar1 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
      while( true ) {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar11) break;
        if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar9 = *(int *)(iVar1 + 0x10 + uVar11 * 4);
        iVar8 = *(int *)(param_1 + 0x18);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar8 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar7 = iVar8 + uVar10 * 4;
        fVar12 = *(float *)(iVar7 + 0x10);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uStack_3c = UnityEngine_ParticleSystem__get_main_368ecf8(iVar9,0);
        UnityEngine_ParticleSystem_MainModule__get_startLifetime_368ee30(&uStack_70,&uStack_3c,0);
        uStack_58 = uStack_70;
        uStack_54 = uStack_6c;
        uStack_50 = uStack_68;
        uStack_4c = uStack_64;
        uStack_48 = uStack_60;
        fVar4 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax_368fd50(&uStack_58,0)
        ;
        if (fVar4 < fVar12) {
          fVar4 = fVar12;
        }
        if (*(uint *)(iVar8 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar11 = uVar11 + 1;
        *(float *)(iVar7 + 0x10) = fVar4;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar6);
  }
  return;
}

