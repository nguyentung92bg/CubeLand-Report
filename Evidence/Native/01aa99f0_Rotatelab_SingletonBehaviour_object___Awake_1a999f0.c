/* IL2CPP: Rotatelab.SingletonBehaviour<object>$$Awake
void Rotatelab_SingletonBehaviour_object___Awake (Rotatelab_SingletonBehaviour_T__o* __this, const MethodInfo_1A999F0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SingletonBehaviour<object>$$Awake
   void Rotatelab_SingletonBehaviour_object___Awake (Rotatelab_SingletonBehaviour_T__o* __this,
   const MethodInfo_1A999F0* method); */

void Rotatelab_SingletonBehaviour_object___Awake_1a999f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  pcVar7 = (char *)(_UNK_01aa9d80 + 0x1aa9a08);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9d84 + 0x1aa9a1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9d88 + 0x1aa9a28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9d8c + 0x1aa9a34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9d90 + 0x1aa9a40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9d94 + 0x1aa9a4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9d98 + 0x1aa9a58));
    *pcVar7 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  piVar9 = *(int **)(_UNK_01aa9d9c + 0x1aa9a88);
  iVar2 = *piVar9;
  uVar8 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934(iVar2);
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar8,0,0);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if (iVar1 == 0) {
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar1 = *piVar9;
    uVar8 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934(iVar1);
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(param_1,uVar8,0);
    if (iVar1 != 0) {
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x14);
      if (*(int *)(*(int *)(*(int *)(_UNK_01aa9da8 + 0x1aa9c84) + 0x70) + 0x74) == 0) {
        FUN_00ec3934();
      }
      piVar9 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar8,0);
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = (**(code **)(*piVar9 + 0x100))(piVar9,*(undefined4 *)(*piVar9 + 0x104));
      uVar8 = System_String__Concat_2a0b574
                        (**(undefined4 **)(_UNK_01aa9dac + 0x1aa9ce0),uVar8,
                         **(undefined4 **)(_UNK_01aa9db0 + 0x1aa9cec),0);
      if (*(int *)(**(int **)(_UNK_01aa9db4 + 0x1aa9d00) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar7 = (char *)(_UNK_035c25f8 + 0x35c24e4);
      if (*pcVar7 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c25fc + 0x35c24f8),param_1,0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2600 + 0x35c2504));
        *pcVar7 = '\x01';
      }
      piVar9 = *(int **)(_UNK_035c2604 + 0x35c2518);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar7 = (char *)(_UNK_035c2608 + 0x35c2534);
      if (*pcVar7 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c260c + 0x35c2548));
        *pcVar7 = '\x01';
      }
      iVar1 = *piVar9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar1 = *piVar9;
      }
      piVar9 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piVar9;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_035c2610 + 0x35c258c)) {
            puVar10 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe0);
            goto LAB_035c25d4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined4 *)thunk_FUN_00efdb38(piVar9,**(int **)(_UNK_035c2610 + 0x35c258c),4);
LAB_035c25d4:
      (*(code *)*puVar10)(piVar9,0,uVar8,param_1,puVar10[1]);
      return;
    }
  }
  else {
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
      iVar3 = *(int *)(param_2 + 0x10);
    }
    if (**(int **)(iVar2 + 0x5c) != 0) {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_SingletonBehaviour_object___OnRemoved_1a99e44
                (**(int **)(iVar1 + 0x5c),
                 *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x10));
      iVar3 = *(int *)(param_2 + 0x10);
    }
    iVar1 = *(int *)(*(int *)(iVar3 + 0x60) + 4);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar2 = 0;
    if ((param_1 != 0) && (iVar2 = thunk_FUN_00f00bc8(param_1,iVar1), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(param_1,iVar1);
    }
    iVar3 = *(int *)(param_2 + 0x10);
    iVar1 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
      iVar3 = *(int *)(param_2 + 0x10);
    }
    **(int **)(iVar1 + 0x5c) = iVar2;
    iVar2 = *(int *)(iVar3 + 0x60);
    iVar1 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
      iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
    }
    iVar2 = *(int *)(iVar2 + 4);
    uVar8 = *(undefined4 *)(iVar1 + 0x5c);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar1 = 0;
    if ((param_1 != 0) && (iVar1 = thunk_FUN_00f00bc8(param_1,iVar2), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(param_1,iVar2);
    }
    thunk_FUN_00ec5080(uVar8,iVar1);
  }
  uVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01aa9da0 + 0x1aa9d30));
  UnityEngine_Events_UnityAction_Scene____ctor_1c5fff8
            (uVar8,param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x18),0);
  if (*(int *)(**(int **)(_UNK_01aa9da4 + 0x1aa9d60) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_0362d470 + 0x362d394);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362d474 + 0x362d3a8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362d478 + 0x362d3b4));
    *pcVar7 = '\x01';
  }
  piVar9 = *(int **)(_UNK_0362d47c + 0x362d3c8);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar10 = *(undefined4 **)(_UNK_0362d480 + 0x362d3f0);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
  do {
    iVar3 = 0;
    iVar2 = System_Delegate__Combine_2bbca94(iVar1,uVar8,0);
    if (iVar2 != 0) {
      uVar6 = *puVar10;
      iVar3 = thunk_FUN_00f00bc8(iVar2,uVar6);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f4fe34(iVar2,uVar6);
      }
    }
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      thunk_FUN_00ec3934();
      iVar2 = *piVar9;
    }
    iVar2 = thunk_FUN_00efd180(*(int *)(iVar2 + 0x5c) + 8,iVar3,iVar1);
    bVar11 = iVar2 != iVar1;
    iVar1 = iVar2;
  } while (bVar11);
  return;
}

