/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$SendAsync
System_Threading_Tasks_Task_string__o* Rotatelab_Networking_HiroUnityWebRequestAdapter__SendAsync (Rotatelab_Networking_HiroUnityWebRequestAdapter_o* __this, System_String_o* method, System_Uri_o* uri, System_Collections_Generic_IDictionary_string__string__o* headers, System_Byte_array* body, int32_t timeoutSec, System_Nullable_CancellationToken__o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$SendAsync
   System_Threading_Tasks_Task_string__o* Rotatelab_Networking_HiroUnityWebRequestAdapter__SendAsync
   (Rotatelab_Networking_HiroUnityWebRequestAdapter_o* __this, System_String_o* method,
   System_Uri_o* uri, System_Collections_Generic_IDictionary_string__string__o* headers,
   System_Byte_array* body, int32_t timeoutSec, System_Nullable_CancellationToken__o
   cancellationToken, const MethodInfo* method); */

undefined4
Rotatelab_Networking_HiroUnityWebRequestAdapter__SendAsync_1160068
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_01170104 + 0x1170088);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170108 + 0x11700ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117010c + 0x11700b8));
    *pcVar11 = '\x01';
  }
  uStack_44 = param_5;
  uStack_40 = param_6;
  uStack_3c = param_8;
  piStack_48 = param_4;
  Rotatelab_Networking_HiroUnityWebRequestAdapter__SendWebRequestAsync_1160114
            (&uStack_30,param_1,param_2,param_3);
  uVar2 = uStack_28;
  piVar1 = (int *)uStack_30;
  uVar6 = uStack_30._4_4_;
  iVar8 = **(int **)(_UNK_01170110 + 0x11700f8);
  iVar3 = *(int *)(iVar8 + 0x1c);
  if (iVar3 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0165f7c0 + 0x165f1a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0165f7c4 + 0x165f1ac));
    iVar3 = *(int *)(iVar8 + 0x1c);
    if (iVar3 == 0) {
      FUN_00efd7c4(iVar8);
      iVar3 = *(int *)(iVar8 + 0x1c);
    }
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_34 = 0;
  uStack_44 = 0;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  if ((*(byte *)(*(int *)(*(int *)(iVar3 + 4) + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  piStack_48 = piVar1;
  uStack_44 = uVar6;
  uStack_40 = uVar2;
  thunk_FUN_00ec5080(&piStack_48,0);
  uStack_30._0_4_ = piStack_48;
  uStack_30._4_4_ = uStack_44;
  uStack_28 = uStack_40;
  iVar3 = *(int *)(*(int *)(*(int *)(iVar8 + 0x1c) + 0x18) + 0x10);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  piVar1 = (int *)uStack_30;
  uVar6 = uStack_30._4_4_;
  if ((int *)uStack_30 != (int *)0x0) {
    iVar10 = (int)(short)uStack_28;
    iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x60) + 0xc) + 0x10);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 4);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768(iVar3);
    }
    iVar4 = *piVar1;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar3) {
          puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 200);
          goto LAB_0165f2dc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar1,iVar3,1);
LAB_0165f2dc:
    iVar3 = (*(code *)*puVar5)(piVar1,iVar10,puVar5[1]);
    if (iVar3 == 0) {
      if ((*(ushort *)(*(int *)(*(int *)(iVar8 + 0x1c) + 0x2c) + 0xbd) & 1) == 0) {
        FUN_00efd768();
      }
      iVar3 = thunk_FUN_00f00cdc();
      System_Threading_Tasks_TaskCompletionSource_object____ctor_1b46c9c
                (iVar3,*(undefined4 *)(*(int *)(iVar8 + 0x1c) + 0x30));
      iVar10 = *(int *)(*(int *)(iVar8 + 0x1c) + 0x38);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = FUN_00efd768();
      }
      if (*(int *)(iVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar4 = *(int *)(iVar8 + 0x1c);
      iVar10 = *(int *)(iVar4 + 0x38);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = FUN_00efd768();
        iVar4 = *(int *)(iVar8 + 0x1c);
      }
      iVar10 = *(int *)(*(int *)(iVar10 + 0x5c) + 4);
      if (iVar10 == 0) {
        iVar10 = *(int *)(iVar4 + 0x38);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = FUN_00efd768();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar10 = *(int *)(*(int *)(iVar8 + 0x1c) + 0x38);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = FUN_00efd768();
        }
        uVar6 = **(undefined4 **)(iVar10 + 0x5c);
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0165f7e0 + 0x165f444));
        System_Action_object____ctor_1f11414
                  (iVar10,uVar6,*(undefined4 *)(*(int *)(iVar8 + 0x1c) + 0x3c),0);
        iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 0x38);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = FUN_00efd768();
        }
        *(int *)(*(int *)(iVar4 + 0x5c) + 4) = iVar10;
        iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 0x38);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = FUN_00efd768();
        }
        thunk_FUN_00ec5080(*(int *)(iVar4 + 0x5c) + 4,iVar10);
        iVar4 = *(int *)(iVar8 + 0x1c);
      }
      uVar6 = Cysharp_Threading_Tasks_Internal_StateTuple__Create_object__UniTask_Awaiter_object___15bd7b8
                        (iVar3,piVar1,uStack_30._4_4_,uStack_28,*(undefined4 *)(iVar4 + 0x40));
      func_0x0166c778(&uStack_30,iVar10,uVar6,*(undefined4 *)(*(int *)(iVar8 + 0x1c) + 0x48));
      if (iVar3 != 0) {
        return *(undefined4 *)(iVar3 + 8);
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(*(int *)(iVar8 + 0x1c) + 0x20) + 0x10);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 0x14);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768(iVar3);
    }
    iVar4 = *piVar1;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar3) {
          puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
          goto LAB_0165f504;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar1,iVar3,0);
LAB_0165f504:
    uVar6 = (*(code *)*puVar5)(piVar1,iVar10,puVar5[1]);
  }
  if (*(int *)(**(int **)(_UNK_0165f7d0 + 0x165f528) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar6 = System_Threading_Tasks_Task__FromResult_object__15cd9e8
                    (uVar6,*(undefined4 *)(*(int *)(iVar8 + 0x1c) + 0x28));
  return uVar6;
}

