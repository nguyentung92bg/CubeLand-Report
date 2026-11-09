/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseSword
bool Rotatelab_Scripts_PlaceableManager__TryUseSword (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_SwordController_o* sword, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseSword
   bool Rotatelab_Scripts_PlaceableManager__TryUseSword (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_Scripts_SwordController_o* sword, const MethodInfo* method); */

uint Rotatelab_Scripts_PlaceableManager__TryUseSword_10479e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01057bf4 + 0x10579fc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057bf8 + 0x1057a10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057bfc + 0x1057a1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057c00 + 0x1057a28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057c04 + 0x1057a34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057c08 + 0x1057a40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057c0c + 0x1057a4c));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_24 = 0;
  uStack_38 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01057c10 + 0x1057a6c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_38,*(int *)(iVar1 + 0x68),**(undefined4 **)(_UNK_01057c14 + 0x1057aa8));
  puVar5 = *(undefined4 **)(_UNK_01057c18 + 0x1057acc);
  do {
    iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_38,*puVar5)
    ;
    iVar1 = iStack_2c;
    if (iVar2 == 0) {
      iVar1 = 0;
      break;
    }
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  } while ((*(int *)(iStack_2c + 0x2c) < 1) ||
          (iVar2 = Rotatelab_Scripts_ShieldController__TryGetSwordHitPoint_1047c28
                             (iStack_2c,&uStack_24), iVar2 == 0));
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_38,**(undefined4 **)(_UNK_01057c1c + 0x1057b20));
  if (*(int *)(**(int **)(_UNK_01057c24 + 0x1057b34) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = UnityEngine_Object__op_Equality_36033f4(iVar1,0,0);
  if (uVar3 == 0) {
    Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4(param_1,param_2);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_SwordController__Hit_1047d64(param_2,iVar1,uStack_24);
  }
  return uVar3 ^ 1;
}

