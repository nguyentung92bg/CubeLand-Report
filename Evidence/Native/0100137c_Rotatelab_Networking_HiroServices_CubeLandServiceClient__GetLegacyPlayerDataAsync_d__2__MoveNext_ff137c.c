/* IL2CPP: Rotatelab.Networking.HiroServices.CubeLandServiceClient.<GetLegacyPlayerDataAsync>d__2$$MoveNext
void Rotatelab_Networking_HiroServices_CubeLandServiceClient__GetLegacyPlayerDataAsync_d__2__MoveNext (Rotatelab_Networking_HiroServices_CubeLandServiceClient__GetLegacyPlayerDataAsync_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.HiroServices.CubeLandServiceClient.<GetLegacyPlayerDataAsync>d__2$$MoveNext
   void 
   Rotatelab_Networking_HiroServices_CubeLandServiceClient__GetLegacyPlayerDataAsync_d__2__MoveNext
   (Rotatelab_Networking_HiroServices_CubeLandServiceClient__GetLegacyPlayerDataAsync_d__2_o __this,
   const MethodInfo* method); */

void Rotatelab_Networking_HiroServices_CubeLandServiceClient__GetLegacyPlayerDataAsync_d__2__MoveNext_ff137c
               (int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_0100179c + 0x1001394);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010017a0 + 0x10013a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010017a4 + 0x10013b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010017a8 + 0x10013c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010017ac + 0x10013cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010017b0 + 0x10013d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010017b4 + 0x10013e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010017b8 + 0x10013f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010017bc + 0x10013fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010017c0 + 0x1001408));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010017c4 + 0x1001414));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_28 = param_1[7];
    param_1[7] = 0;
  }
  else {
    iVar8 = param_1[4];
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar7 = *(int **)(iVar8 + 0x20);
    uVar10 = *(undefined4 *)(iVar8 + 0x24);
    uVar1 = Nakama_TinyJson_JsonWriter__ToJson_2c28f64(param_1[5],0);
    iVar8 = param_1[6];
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar7;
    uVar9 = **(undefined4 **)(_UNK_010017c8 + 0x10014b4);
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_010017cc + 0x10014c0)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0x138);
          goto LAB_01001508;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_010017cc + 0x10014c0),0xf);
LAB_01001508:
    iVar8 = (*(code *)*puVar3)(piVar7,uVar10,uVar9,uVar1,0,iVar8,puVar3[1]);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_28 = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar8,**(undefined4 **)(_UNK_010017d0 + 0x100154c));
    iVar8 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&iStack_28,**(undefined4 **)(_UNK_010017d4 + 0x1001560));
    if (iVar8 == 0) {
      *param_1 = 0;
      param_1[7] = iStack_28;
      thunk_FUN_00ec5080(param_1 + 7,0);
      if (*(int *)(**(int **)(_UNK_010017d8 + 0x100160c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___AwaitUnsafeOnCompleted_TaskAwaiter_object___CubeLandServiceClient__GetLegacyPlayerDataAsync_d__2__121d3d4
                (param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_010017dc + 0x1001628));
      return;
    }
  }
  piVar7 = (int *)System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                            (&iStack_28,**(undefined4 **)(_UNK_010017e0 + 0x1001580));
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_010017e4 + 0x10015a8)) {
        puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
        goto LAB_01001648;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_010017e4 + 0x10015a8),0);
LAB_01001648:
  uVar1 = (*(code *)*puVar3)(piVar7,puVar3[1]);
  uVar1 = Nakama_TinyJson_JsonParser__FromJson_object__14a855c
                    (uVar1,**(undefined4 **)(_UNK_010017e8 + 0x1001664));
  piVar7 = *(int **)(_UNK_010017ec + 0x100167c);
  *param_1 = -2;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___SetResult_17c08c0
            (param_1 + 1,uVar1,**(undefined4 **)(_UNK_010017f0 + 0x10016a0));
  return;
}

