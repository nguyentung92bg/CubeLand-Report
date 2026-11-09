/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager.<DestroyClusterRoutine>d__10$$MoveNext
bool Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10__MoveNext (Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0103784c) */
/* WARNING: Removing unreachable block (ram,0x01037864) */
/* WARNING: Removing unreachable block (ram,0x01037870) */
/* WARNING: Removing unreachable block (ram,0x01037874) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager.<DestroyClusterRoutine>d__10$$MoveNext
   bool Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10__MoveNext
   (Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10_o* __this, const MethodInfo*
   method); */

undefined4
Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10__MoveNext_10274ec(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  char *pcVar7;
  int iVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  pcVar7 = (char *)(_UNK_010378f8 + 0x103750c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010378fc + 0x1037520));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01037900 + 0x103752c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01037904 + 0x1037538));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01037908 + 0x1037544));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103790c + 0x1037550));
    *pcVar7 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
    fVar6 = *(float *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    fVar11 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    fVar6 = fVar6 + fVar11;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar8 = *(int *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fVar6;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 0) {
        return 0;
      }
      puVar4 = *(undefined4 **)(_UNK_01037910 + 0x1037598);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      iVar3 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c(*puVar4);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = Rotatelab_UI_UIInputBlocker__BlockInputWithinScope_112443c(iVar3,0);
      *(undefined4 *)(param_1 + 0x1c) = uVar5;
      thunk_FUN_00ec5080();
      *(undefined4 *)(param_1 + 8) = 0xfffffffd;
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x14),0,**(undefined4 **)(_UNK_01037914 + 0x10375f4));
      if (iVar8 != 0) {
        fVar6 = (float)Rotatelab_Scripts_MeteorShowerManager__SpawnMeteor_1027178(iVar8,uVar5);
        if (*(int *)(**(int **)(_UNK_01037918 + 0x103762c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar5 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(fVar6 * _UNK_010378f4,0);
        *(undefined4 *)(param_1 + 0xc) = uVar5;
        thunk_FUN_00ec5080();
        *(undefined4 *)(param_1 + 8) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = *(undefined4 **)(_UNK_0103791c + 0x1037684);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_CameraManager__ShakeCamera_ffb9dc(iVar3,0x3da3d70a,0);
    fVar6 = _UNK_010378ec;
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0xc);
    *(int *)(param_1 + 0x20) = iVar3;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (iVar8 < iVar3) {
    fVar11 = *(float *)(param_1 + 0x18);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 < 0.0) << 0x1f | (uint)(fVar11 == 0.0) << 0x1e;
    uVar9 = uVar1 | (uint)NAN(fVar11) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    iVar8 = iVar3;
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar9 >> 0x1c) & 1)) {
      pcVar7 = (char *)(_UNK_01037920 + 0x1037730);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01037924 + 0x1037744));
        *pcVar7 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_01037928 + 0x1037758) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar10 = (float)VectorSignedToFloat(iVar3,(byte)(uVar9 >> 0x16) & 3);
      fVar6 = (float)FUN_01f4f1b4((fVar6 / fVar11) * fVar10);
      iVar8 = (int)fVar6 + 1;
      if (fVar6 == _UNK_010378f0) {
        iVar8 = -0x7fffffff;
      }
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
    puVar4 = *(undefined4 **)(_UNK_0103792c + 0x10377bc);
    while (iVar3 = *(int *)(param_1 + 0x24), iVar3 < iVar8) {
      *(int *)(param_1 + 0x24) = iVar3 + 1;
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x14),iVar3,*puVar4);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_BaseTargetableController__DestroyExternally_ff5aec(iVar3,0);
    }
    if (iVar3 < *(int *)(param_1 + 0x20)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080();
      *(undefined4 *)(param_1 + 8) = 2;
      return 1;
    }
  }
  Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10____m__Finally1_1027930();
  return 0;
}

