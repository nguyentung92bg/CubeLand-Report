/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference<object>$$.ctor
void Rotatelab_Networking_AdvancedAssetReference_object____ctor (Rotatelab_Networking_AdvancedAssetReference_T__o* __this, System_String_o* guid, const MethodInfo_1F1CAE4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference<object>$$.ctor
   void Rotatelab_Networking_AdvancedAssetReference_object____ctor
   (Rotatelab_Networking_AdvancedAssetReference_T__o* __this, System_String_o* guid, const
   MethodInfo_1F1CAE4* method); */

void Rotatelab_Networking_AdvancedAssetReference_object____ctor_1f1cae4
               (int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)(_UNK_03259714 + 0x32596bc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03259718 + 0x32596d0),param_2,0);
    *pcVar3 = '\x01';
  }
  puVar4 = (undefined4 *)(param_1 + 8);
  *puVar4 = **(undefined4 **)(_UNK_0325971c + 0x32596e8);
  thunk_FUN_00ec5080(puVar4);
  System_Object___ctor_2bb93bc(param_1,0);
  *puVar4 = param_2;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

