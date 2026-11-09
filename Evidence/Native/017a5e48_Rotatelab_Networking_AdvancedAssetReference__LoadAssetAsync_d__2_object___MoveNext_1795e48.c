/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference.<LoadAssetAsync>d__2<object>$$MoveNext
void Rotatelab_Networking_AdvancedAssetReference__LoadAssetAsync_d__2_object___MoveNext (Rotatelab_Networking_AdvancedAssetReference__LoadAssetAsync_d__2_object__o __this, const MethodInfo_1795E48* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x017a5fc8) */
/* WARNING: Removing unreachable block (ram,0x017a6000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference.<LoadAssetAsync>d__2<object>$$MoveNext
   void Rotatelab_Networking_AdvancedAssetReference__LoadAssetAsync_d__2_object___MoveNext
   (Rotatelab_Networking_AdvancedAssetReference__LoadAssetAsync_d__2_object__o __this, const
   MethodInfo_1795E48* method); */

void Rotatelab_Networking_AdvancedAssetReference__LoadAssetAsync_d__2_object___MoveNext_1795e48
               (int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_44 [16];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_017a6260 + 0x17a5e64);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a6264 + 0x17a5e78));
    *pcVar6 = '\x01';
  }
  iVar8 = param_1[4];
  uStack_28 = 0;
  uStack_20 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_2c = param_1[5];
    param_1[5] = 0;
    goto LAB_017a5f7c;
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_20 = *(undefined4 *)(iVar8 + 0x1c);
  uStack_28 = *(undefined8 *)(iVar8 + 0x14);
  iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__IsValid_34bfcc0
                    (&uStack_28,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    Rotatelab_Networking_AdvancedAssetReference____n__0_object__13a5274
              (auStack_44,iVar8,*(undefined4 *)(*(int *)(iVar1 + 0x60) + 4));
  }
  while( true ) {
    uStack_20 = *(undefined4 *)(iVar8 + 0x1c);
    uStack_28 = *(undefined8 *)(iVar8 + 0x14);
    iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__get_IsDone_34c0020
                      (&uStack_28,0);
    if (iVar1 != 0) break;
    if (*(int *)(**(int **)(_UNK_017a6268 + 0x17a5f3c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uStack_30 = Cysharp_Threading_Tasks_UniTask__Yield_3216554(0);
    iStack_2c = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_321c1d4(&uStack_30,0);
    iVar1 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_321c1e4(&iStack_2c,0);
    if (iVar1 == 0) {
      param_1[5] = iStack_2c;
      iVar8 = *(int *)(param_2 + 0x10);
      *param_1 = 0;
      if ((*(byte *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = FUN_00efd768();
      }
      func_0x01246518(param_1 + 1,&iStack_2c,param_1,*(undefined4 *)(*(int *)(iVar8 + 0x60) + 0x10))
      ;
      return;
    }
LAB_017a5f7c:
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_321c1ec(&iStack_2c,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  uStack_20 = *(undefined4 *)(iVar8 + 0x1c);
  uStack_28 = *(undefined8 *)(iVar8 + 0x14);
  iVar9 = 0;
  iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__IsValid_34bfcc0
                    (&uStack_28,0);
  if (iVar1 != 0) {
    uStack_20 = *(undefined4 *)(iVar8 + 0x1c);
    uStack_28 = *(undefined8 *)(iVar8 + 0x14);
    uVar2 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__get_Result_34bcd60
                      (&uStack_28,0);
    iVar8 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768();
    }
    iVar8 = *(int *)(*(int *)(iVar8 + 0x60) + 0x1c);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768(iVar8);
    }
    iVar9 = thunk_FUN_00f00bc8(uVar2,iVar8);
  }
  iVar8 = *(int *)(param_2 + 0x10);
  *param_1 = -2;
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = FUN_00efd768();
  }
  piVar7 = (int *)param_1[1];
  if (piVar7 == (int *)0x0) {
    param_1[3] = iVar9;
    thunk_FUN_00ec5080(param_1 + 3,iVar9);
  }
  else {
    iVar8 = *(int *)(*(int *)(*(int *)(iVar8 + 0x60) + 0x24) + 0x10);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768();
    }
    iVar8 = *(int *)(*(int *)(iVar8 + 0x60) + 4);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768(iVar8);
    }
    iVar1 = *piVar7;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == iVar8) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
          goto LAB_017a6168;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar7,iVar8,2);
LAB_017a6168:
    (*(code *)*puVar3)(piVar7,iVar9,puVar3[1]);
  }
  return;
}

