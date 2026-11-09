/* IL2CPP: Rotatelab.Scripts.DockManager$$MoveBlasterToGhostDockCoroutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$MoveBlasterToGhostDockCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine
   (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_Scripts_BlasterController_o* blaster, const
   MethodInfo* method); */

int Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_1006b94
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01016c14 + 0x1016bac);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016c18 + 0x1016bc0));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01016c1c + 0x1016bd4));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_1);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_2);
  return iVar1;
}

