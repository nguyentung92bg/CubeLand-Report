/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<LoadFromRemoteAsync>d__36$$MoveNext
void Rotatelab_Networking_CloudSaveManager__LoadFromRemoteAsync_d__36__MoveNext (Rotatelab_Networking_CloudSaveManager__LoadFromRemoteAsync_d__36_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<LoadFromRemoteAsync>d__36$$MoveNext
   void Rotatelab_Networking_CloudSaveManager__LoadFromRemoteAsync_d__36__MoveNext
   (Rotatelab_Networking_CloudSaveManager__LoadFromRemoteAsync_d__36_o __this, const MethodInfo*
   method); */

void Rotatelab_Networking_CloudSaveManager__LoadFromRemoteAsync_d__36__MoveNext_1146fc4
               (int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar8 = (char *)(_UNK_011574cc + 0x1156fdc);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574d0 + 0x1156ff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574d4 + 0x1156ffc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574d8 + 0x1157008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574dc + 0x1157014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574e0 + 0x1157020));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574e4 + 0x115702c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574e8 + 0x1157038));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574ec + 0x1157044));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574f0 + 0x1157050));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574f4 + 0x115705c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574f8 + 0x1157068));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011574fc + 0x1157074));
    *pcVar8 = '\x01';
  }
  iVar11 = param_1[4];
  iStack_1c = 0;
  uStack_20 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_1c = param_1[6];
    param_1[6] = 0;
  }
  else {
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_Networking_CloudSaveManager__get_Nakama_11417dc();
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01157500 + 0x11570b8));
    Nakama_StorageObjectId___ctor_2c26718(iVar2,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar2 + 8) = **(undefined4 **)(_UNK_01157504 + 0x11570e0);
    thunk_FUN_00ec5080();
    *(undefined4 *)(iVar2 + 0xc) = **(undefined4 **)(_UNK_01157508 + 0x11570f8);
    thunk_FUN_00ec5080();
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0115750c + 0x1157110));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar3 + 0x14);
    thunk_FUN_00ec5080();
    iVar2 = Rotatelab_GameExtensions__ReadStorageObjectAsync_fb5b10(uVar1,iVar2,0,param_1[5],0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_1c = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar2,**(undefined4 **)(_UNK_01157510 + 0x115716c));
    iVar2 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&iStack_1c,**(undefined4 **)(_UNK_01157514 + 0x1157180));
    if (iVar2 == 0) {
      *param_1 = 0;
      param_1[6] = iStack_1c;
      thunk_FUN_00ec5080(param_1 + 6,0);
      func_0x01172a84(param_1 + 1,&iStack_1c,param_1,**(undefined4 **)(_UNK_01157518 + 0x11571bc));
      return;
    }
  }
  piVar4 = (int *)System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                            (&iStack_1c,**(undefined4 **)(_UNK_0115751c + 0x11571f0));
  if (piVar4 == (int *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar2 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01157520 + 0x1157214)) {
          puVar5 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01157264;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar4,**(int **)(_UNK_01157520 + 0x1157214),0);
LAB_01157264:
    uVar1 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = Rotatelab_Networking_CloudSaveManager__DeserializeData_1143ccc(uVar1,uVar1);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_30 = *(undefined4 *)(iVar11 + 0x10);
    uStack_2c = *(undefined4 *)(iVar11 + 0x14);
    uVar9 = *(undefined4 *)(iVar11 + 0x18);
    uVar10 = *(undefined4 *)(iVar11 + 0x1c);
    uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01157524 + 0x11572b0) + 0x34),&uStack_30);
    uVar1 = System_String__Format_2a0c2b4
                      (**(undefined4 **)(_UNK_01157528 + 0x11572d0),uVar9,uVar10,uVar1,0);
    if (*(int *)(**(int **)(_UNK_0115752c + 0x11572f4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogWarning_35b0090(uVar1,0);
  }
  piVar4 = (int *)param_1[1];
  *param_1 = -2;
  if (piVar4 == (int *)0x0) {
    param_1[3] = iVar11;
    thunk_FUN_00ec5080(param_1 + 3,iVar11);
  }
  else {
    iVar2 = *(int *)(**(int **)(_UNK_01157538 + 0x1157330) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar3 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar2) {
          puVar5 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xd0);
          goto LAB_011573c4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar4,iVar2,2);
LAB_011573c4:
    (*(code *)*puVar5)(piVar4,iVar11,puVar5[1]);
  }
  return;
}

