/* IL2CPP: Rotatelab.Scripts.AppUpdateManager.<Start>d__2$$MoveNext
void Rotatelab_Scripts_AppUpdateManager__Start_d__2__MoveNext (Rotatelab_Scripts_AppUpdateManager__Start_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0106f9c8) */
/* WARNING: Removing unreachable block (ram,0x0106f9a8) */
/* WARNING: Removing unreachable block (ram,0x0106fa58) */
/* WARNING: Removing unreachable block (ram,0x0106f990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AppUpdateManager.<Start>d__2$$MoveNext
   void Rotatelab_Scripts_AppUpdateManager__Start_d__2__MoveNext
   (Rotatelab_Scripts_AppUpdateManager__Start_d__2_o __this, const MethodInfo* method); */

void Rotatelab_Scripts_AppUpdateManager__Start_d__2__MoveNext_105f4c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_0106fbf4 + 0x106f4d8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fbf8 + 0x106f4ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fbfc + 0x106f4f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fc00 + 0x106f504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fc04 + 0x106f510));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fc08 + 0x106f51c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fc0c + 0x106f528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fc10 + 0x106f534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fc14 + 0x106f540));
    *pcVar6 = '\x01';
  }
  iVar10 = param_1[2];
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  uStack_2c = 0;
  if (*param_1 == 0) {
    piVar7 = (int *)param_1[3];
    iVar1 = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
    piStack_28 = piVar7;
    iStack_24 = iVar1;
  }
  else {
    piVar7 = *(int **)(_UNK_0106fc18 + 0x106f574);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x5c);
    iVar8 = puVar3[1];
    if (iVar8 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
      }
      uVar9 = *puVar3;
      iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106fc1c + 0x106f5c0));
      System_Func_bool____ctor_23938dc(iVar8,uVar9,**(undefined4 **)(_UNK_0106fc20 + 0x106f5d4),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
      *piVar7 = iVar8;
      thunk_FUN_00ec5080(piVar7,iVar8);
    }
    piVar7 = *(int **)(_UNK_0106fc24 + 0x106f604);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_38,iVar8,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_38,0);
    pcVar6 = (char *)(_UNK_0106fc28 + 0x106f660);
    iStack_24 = iStack_34;
    piStack_28 = piStack_38;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0106fc2c + 0x106f680));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_0106fc30 + 0x106f6a8);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0106fc34 + 0x106f6bc));
      *pcVar6 = '\x01';
    }
    iVar1 = (int)(short)iStack_34;
    if (piStack_38 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      iVar8 = *piStack_38;
      uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_0106fc38 + 0x106f6e0)) {
            puVar3 = (undefined4 *)(iVar8 + *piVar7 * 8 + 0xc0);
            goto LAB_0106f750;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_0106fc38 + 0x106f6e0),0);
LAB_0106f750:
      iVar8 = (*(code *)*puVar3)(piStack_38,iVar1,puVar3[1]);
      piVar7 = piStack_38;
      if (iVar8 == 0) {
        param_1[4] = iStack_34;
        *param_1 = 0;
        param_1[3] = (int)piStack_38;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x0107f6ac(param_1 + 1,&piStack_28,param_1,**(undefined4 **)(_UNK_0106fc3c + 0x106fac0)
                       );
        return;
      }
    }
  }
  pcVar6 = (char *)(_UNK_0106fc40 + 0x106f77c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fc44 + 0x106f790));
    *pcVar6 = '\x01';
  }
  if (piVar7 != (int *)0x0) {
    iVar8 = *piVar7;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0106fc48 + 0x106f7b0)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd0);
          goto LAB_0106f7f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_0106fc48 + 0x106f7b0),2);
LAB_0106f7f8:
    (*(code *)*puVar3)(piVar7,(int)(short)iVar1,puVar3[1]);
  }
  piVar7 = *(int **)(_UNK_0106fc4c + 0x106f818);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
  if (iVar1 == 0xb) {
    puVar3 = *(undefined4 **)(_UNK_0106fc50 + 0x106f844);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1c);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar10 + 0x14) = uVar9;
    thunk_FUN_00ec5080((undefined4 *)(iVar10 + 0x14),uVar9);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x10);
LAB_0106f958:
    uVar9 = *puVar3;
  }
  else {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
    if (iVar1 == 8) {
      puVar3 = *(undefined4 **)(_UNK_0106fc54 + 0x106f8e8);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(iVar10 + 0x14) = uVar9;
      thunk_FUN_00ec5080((undefined4 *)(iVar10 + 0x14),uVar9);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14);
      goto LAB_0106f958;
    }
    uVar9 = 0;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  iVar1 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(iVar10 + 0x14),0);
  if ((iVar1 == 0) && (iVar1 = System_String__IsNullOrEmpty_2a0a844(uVar9,0), iVar1 == 0)) {
    uVar9 = Rotatelab_Scripts_AppUpdateManager__GetVersion_105f06c(0,uVar9);
    if (*(int *)(iVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Scripts_AppUpdateManager__GetVersion_105f06c
                      (uVar9,*(undefined4 *)(*(int *)(iVar10 + 0x10) + 0xc));
    iVar1 = System_Version__op_LessThanOrEqual_2b94210(uVar9,uVar2,0);
    if (iVar1 == 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0106fc58 + 0x106f9f8));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(*(int *)(iVar1 + 0x5c) + 0xc) != '\0') {
        if (*(int *)(**(int **)(_UNK_0106fc5c + 0x106fa34) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68();
        if (iVar1 == 0) goto LAB_0106fa64;
      }
      Rotatelab_Scripts_AppUpdateManager__ShowForceUpdateDialog_105f130(iVar10);
    }
  }
LAB_0106fa64:
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

