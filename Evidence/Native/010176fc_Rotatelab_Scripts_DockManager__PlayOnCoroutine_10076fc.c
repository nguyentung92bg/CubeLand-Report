/* IL2CPP: Rotatelab.Scripts.DockManager$$PlayOnCoroutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_DockManager__PlayOnCoroutine (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_UI_PlayOnOffer_o offer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$PlayOnCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Scripts_DockManager__PlayOnCoroutine
   (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_UI_PlayOnOffer_o offer, const MethodInfo*
   method); */

int Rotatelab_Scripts_DockManager__PlayOnCoroutine_10076fc
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01017780 + 0x1017718);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017784 + 0x1017730));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01017788 + 0x1017744));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  return iVar1;
}

