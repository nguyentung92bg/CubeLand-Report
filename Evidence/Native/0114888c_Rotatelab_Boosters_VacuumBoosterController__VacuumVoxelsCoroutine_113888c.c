/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$VacuumVoxelsCoroutine
System_Collections_IEnumerator_o* Rotatelab_Boosters_VacuumBoosterController__VacuumVoxelsCoroutine (Rotatelab_Boosters_VacuumBoosterController_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$VacuumVoxelsCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_Boosters_VacuumBoosterController__VacuumVoxelsCoroutine
   (Rotatelab_Boosters_VacuumBoosterController_o* __this, int32_t colorType, const MethodInfo*
   method); */

int Rotatelab_Boosters_VacuumBoosterController__VacuumVoxelsCoroutine_113888c
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01148900 + 0x11488a4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148904 + 0x11488b8));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01148908 + 0x11488cc));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  return iVar1;
}

