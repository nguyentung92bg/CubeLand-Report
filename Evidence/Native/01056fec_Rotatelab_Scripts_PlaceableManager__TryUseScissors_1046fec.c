/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseScissors
bool Rotatelab_Scripts_PlaceableManager__TryUseScissors (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_ScissorsController_o* scissors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseScissors
   bool Rotatelab_Scripts_PlaceableManager__TryUseScissors (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_Scripts_ScissorsController_o* scissors, const MethodInfo* method); */

uint Rotatelab_Scripts_PlaceableManager__TryUseScissors_1046fec(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_010571f4 + 0x1057004);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010571f8 + 0x1057018));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010571fc + 0x1057024));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057200 + 0x1057030));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057204 + 0x105703c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057208 + 0x1057048));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105720c + 0x1057054));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_1c = 0;
  uStack_30 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01057210 + 0x1057074));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_30,*(int *)(iVar1 + 0x5c),**(undefined4 **)(_UNK_01057214 + 0x10570b0));
  uVar6 = 0;
  puVar5 = *(undefined4 **)(_UNK_01057218 + 0x10570d4);
  puVar7 = &uStack_30;
  do {
    iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_30,*puVar5)
    ;
    iVar1 = iStack_24;
    if (iVar2 == 0) {
      iVar1 = 0;
      break;
    }
    if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  } while ((*(int *)(iStack_24 + 0x34) < 1) ||
          (iVar2 = Rotatelab_Scripts_GiftWrapperController__TryGetScissorsCutPoint_100ef28
                             (iStack_24,&uStack_1c,0,extraout_r3,uVar6,puVar7), iVar2 == 0));
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_30,**(undefined4 **)(_UNK_0105721c + 0x105712c));
  if (*(int *)(**(int **)(_UNK_01057224 + 0x1057140) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = UnityEngine_Object__op_Equality_36033f4(iVar1,0,0);
  if (uVar3 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ScissorsController__Cut_1047228(param_2,iVar1,uStack_1c);
  }
  return uVar3 ^ 1;
}

