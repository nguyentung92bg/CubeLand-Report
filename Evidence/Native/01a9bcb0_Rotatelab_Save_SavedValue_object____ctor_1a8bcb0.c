/* IL2CPP: Rotatelab.Save.SavedValue<object>$$.ctor
void Rotatelab_Save_SavedValue_object____ctor (Rotatelab_Save_SavedValue_T__o* __this, System_String_o* key, Il2CppObject* defaultValue, const MethodInfo_1A8BCB0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedValue<object>$$.ctor
   void Rotatelab_Save_SavedValue_object____ctor (Rotatelab_Save_SavedValue_T__o* __this,
   System_String_o* key, Il2CppObject* defaultValue, const MethodInfo_1A8BCB0* method); */

void Rotatelab_Save_SavedValue_object____ctor_1a8bcb0
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  Rotatelab_Save_SavedValue___ctor_1082f7c(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),param_2);
  puVar3 = (undefined4 *)(param_1 + 0xc);
  *puVar3 = param_3;
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

