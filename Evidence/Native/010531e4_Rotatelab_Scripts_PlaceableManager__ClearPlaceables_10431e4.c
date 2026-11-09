/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ClearPlaceables
void Rotatelab_Scripts_PlaceableManager__ClearPlaceables (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ClearPlaceables
   void Rotatelab_Scripts_PlaceableManager__ClearPlaceables (Rotatelab_Scripts_PlaceableManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__ClearPlaceables_10431e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_010533cc + 0x10531f8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010533d0 + 0x105320c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010533d4 + 0x1053218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010533d8 + 0x1053224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010533dc + 0x1053230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010533e0 + 0x105323c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010533e4 + 0x1053248));
    *pcVar4 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,iVar2,0);
    *(undefined4 *)(param_1 + 0x7c) = 0;
    thunk_FUN_00ec5080((int *)(param_1 + 0x7c),0);
  }
  iVar2 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (0 < iVar3) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar2 + 8),0,iVar3,0);
  }
  iVar2 = 0;
  puVar5 = *(undefined4 **)(_UNK_010533e8 + 0x10532cc);
  piVar6 = *(int **)(_UNK_010533ec + 0x10532d4);
  while( true ) {
    if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(param_1 + 0xb4);
    if (*(int *)(*(int *)(param_1 + 0xb4) + 0xc) <= iVar2) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (0 < iVar2) {
        System_Array__Clear_2b96cdc(*(undefined4 *)(iVar3 + 8),0,iVar2,0);
      }
      if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_HashSet_object___Clear_241fd60
                (*(int *)(param_1 + 0xb8),**(undefined4 **)(_UNK_010533f0 + 0x10533a4));
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar4 = (char *)(_UNK_01113270 + 0x11131d8);
      if (*pcVar4 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01113274 + 0x11131ec),0);
        FUN_00ec37c0(*(undefined4 *)(_UNK_01113278 + 0x11131f8));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0111327c + 0x1113204));
        *pcVar4 = '\x01';
      }
      while( true ) {
        if (*(int *)(iVar2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(iVar2 + 0x28) + 0xc) < 1) break;
        if (*(int *)(iVar2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(iVar2 + 0x28),0,**(undefined4 **)(_UNK_01113280 + 0x1113230));
        Rotatelab_Pool_ObjectPool_object___Recycle_1857b50
                  (iVar2,uVar1,**(undefined4 **)(_UNK_01113284 + 0x1113248));
      }
      return;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814(iVar3,iVar2,*puVar5);
    if (iVar3 == 0) break;
    uVar1 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__DestroyImmediate_36099bc(uVar1,0);
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

