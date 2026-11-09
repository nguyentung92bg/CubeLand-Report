/* IL2CPP: Rotatelab.Scripts.WeakReferenceListEnumerator<object, object>$$MoveNext
bool Rotatelab_Scripts_WeakReferenceListEnumerator_object__object___MoveNext (Rotatelab_Scripts_WeakReferenceListEnumerator_ListType__InstanceType__o __this, const MethodInfo_1E469C0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.WeakReferenceListEnumerator<object, object>$$MoveNext
   bool Rotatelab_Scripts_WeakReferenceListEnumerator_object__object___MoveNext
   (Rotatelab_Scripts_WeakReferenceListEnumerator_ListType__InstanceType__o __this, const
   MethodInfo_1E469C0* method); */

undefined4
Rotatelab_Scripts_WeakReferenceListEnumerator_object__object___MoveNext_1e469c0
          (int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_1c;
  
  uVar5 = param_1[1];
  uStack_1c = 0;
  if (-1 < (int)uVar5) {
    do {
      iVar4 = *param_1;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(param_2 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                        (iVar4,uVar5,*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x18));
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(param_2 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      iVar4 = System_WeakReference_object___TryGetTarget_1e46e5c
                        (iVar4,&uStack_1c,*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x20));
      uVar1 = uStack_1c;
      if (iVar4 == 0) {
        iVar4 = *param_1;
        iVar2 = param_1[1];
        param_1[1] = iVar2 + -1;
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(param_2 + 0x10);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = FUN_00efd768();
        }
        System_Collections_Generic_List_object___RemoveAt_267f3f8
                  (iVar4,iVar2,*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x28));
      }
      else {
        iVar4 = *(int *)(param_2 + 0x10);
        param_1[1] = param_1[1] + -1;
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = FUN_00efd768();
        }
        iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 4);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = FUN_00efd768(iVar4);
        }
        iVar4 = thunk_FUN_00f00bc8(uVar1,iVar4);
        if (iVar4 != 0) {
          if ((*(ushort *)(*(int *)(param_2 + 0x10) + 0xbd) & 1) == 0) {
            FUN_00efd768();
          }
          param_1[2] = iVar4;
          thunk_FUN_00ec5080(param_1 + 2,iVar4);
          return 1;
        }
      }
      uVar5 = param_1[1];
    } while (uVar5 < 0x80000000);
  }
  if ((*(ushort *)(*(int *)(param_2 + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  param_1[2] = 0;
  thunk_FUN_00ec5080(param_1 + 2,0);
  return 0;
}

