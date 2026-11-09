/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseKey
bool Rotatelab_Scripts_PlaceableManager__TryUseKey (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_KeyController_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseKey
   bool Rotatelab_Scripts_PlaceableManager__TryUseKey (Rotatelab_Scripts_PlaceableManager_o* __this,
   Rotatelab_Scripts_KeyController_o* key, const MethodInfo* method); */

int Rotatelab_Scripts_PlaceableManager__TryUseKey_1046e4c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01056fc0 + 0x1056e68);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056fc4 + 0x1056e7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056fc8 + 0x1056e88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056fcc + 0x1056e94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056fd0 + 0x1056ea0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056fd4 + 0x1056eac));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_01056fd8 + 0x1056ec4);
  uVar5 = *(undefined4 *)(param_1 + 0xb4);
  uStack_1c = 0;
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar2[0x14];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar4 + 0x5c);
    }
    uVar7 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01056fdc + 0x1056f14));
    System_Predicate_object____ctor_1876380
              (iVar6,uVar7,**(undefined4 **)(_UNK_01056fe0 + 0x1056f34),0);
    piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 0x50);
    *piVar4 = iVar6;
    thunk_FUN_00ec5080(piVar4,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_01056fe4 + 0x1056f5c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFindByType_object__object__1489f58
                    (uVar5,iVar6,&uStack_1c,**(undefined4 **)(_UNK_01056fe8 + 0x1056f80));
  if (iVar1 != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_KeyController__Unlock_103ddf8(param_2,uStack_1c,0);
  }
  return iVar1;
}

