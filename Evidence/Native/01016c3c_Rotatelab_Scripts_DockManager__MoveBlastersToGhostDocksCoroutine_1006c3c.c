/* IL2CPP: Rotatelab.Scripts.DockManager$$MoveBlastersToGhostDocksCoroutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine (Rotatelab_Scripts_DockManager_o* __this, System_Collections_Generic_List_BlasterController__o* blasters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$MoveBlastersToGhostDocksCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine
   (Rotatelab_Scripts_DockManager_o* __this, System_Collections_Generic_List_BlasterController__o*
   blasters, const MethodInfo* method); */

int Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_1006c3c
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01016cbc + 0x1016c54);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016cc0 + 0x1016c68));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01016cc4 + 0x1016c7c));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_1);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_2);
  return iVar1;
}

