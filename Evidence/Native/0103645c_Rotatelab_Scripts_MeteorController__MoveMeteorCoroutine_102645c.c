/* IL2CPP: Rotatelab.Scripts.MeteorController$$MoveMeteorCoroutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_MeteorController__MoveMeteorCoroutine (Rotatelab_Scripts_MeteorController_o* __this, UnityEngine_Transform_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MeteorController$$MoveMeteorCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Scripts_MeteorController__MoveMeteorCoroutine
   (Rotatelab_Scripts_MeteorController_o* __this, UnityEngine_Transform_o* target, const MethodInfo*
   method); */

int Rotatelab_Scripts_MeteorController__MoveMeteorCoroutine_102645c
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010364dc + 0x1036474);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010364e0 + 0x1036488));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010364e4 + 0x103649c));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_2);
  return iVar1;
}

