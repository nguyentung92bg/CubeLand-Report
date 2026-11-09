/* IL2CPP: Rotatelab.Scripts.WeakReferenceListEnumerator<object, object>$$set_Current
void Rotatelab_Scripts_WeakReferenceListEnumerator_object__object___set_Current (Rotatelab_Scripts_WeakReferenceListEnumerator_ListType__InstanceType__o __this, Il2CppObject* value, const MethodInfo_1E46934* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.WeakReferenceListEnumerator<object, object>$$set_Current
   void Rotatelab_Scripts_WeakReferenceListEnumerator_object__object___set_Current
   (Rotatelab_Scripts_WeakReferenceListEnumerator_ListType__InstanceType__o __this, Il2CppObject*
   value, const MethodInfo_1E46934* method); */

void Rotatelab_Scripts_WeakReferenceListEnumerator_object__object___set_Current_1e46934
               (int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 8);
  *puVar3 = param_2;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

