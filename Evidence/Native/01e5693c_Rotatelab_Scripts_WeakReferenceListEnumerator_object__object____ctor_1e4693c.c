/* IL2CPP: Rotatelab.Scripts.WeakReferenceListEnumerator<object, object>$$.ctor
void Rotatelab_Scripts_WeakReferenceListEnumerator_object__object____ctor (Rotatelab_Scripts_WeakReferenceListEnumerator_ListType__InstanceType__o __this, System_Collections_Generic_List_WeakReference_ListType___o* list, const MethodInfo_1E4693C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.WeakReferenceListEnumerator<object, object>$$.ctor
   void Rotatelab_Scripts_WeakReferenceListEnumerator_object__object____ctor
   (Rotatelab_Scripts_WeakReferenceListEnumerator_ListType__InstanceType__o __this,
   System_Collections_Generic_List_WeakReference_ListType___o* list, const MethodInfo_1E4693C*
   method); */

void Rotatelab_Scripts_WeakReferenceListEnumerator_object__object____ctor_1e4693c
               (int *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  
  *param_1 = param_2;
  thunk_FUN_00ec5080();
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_3 + 0x10);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    FUN_00efd768();
    iVar3 = *(int *)(param_3 + 0x10);
  }
  param_1[1] = *(int *)(param_2 + 0xc) + -1;
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  param_1 = param_1 + 2;
  *param_1 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)param_1 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)param_1 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

