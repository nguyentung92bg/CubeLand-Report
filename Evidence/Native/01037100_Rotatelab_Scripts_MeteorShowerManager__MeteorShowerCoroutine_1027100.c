/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager$$MeteorShowerCoroutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_MeteorShowerManager__MeteorShowerCoroutine (Rotatelab_Scripts_MeteorShowerManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager$$MeteorShowerCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Scripts_MeteorShowerManager__MeteorShowerCoroutine
   (Rotatelab_Scripts_MeteorShowerManager_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_MeteorShowerManager__MeteorShowerCoroutine_1027100(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0103716c + 0x1037114);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01037170 + 0x1037128));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01037174 + 0x103713c));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

