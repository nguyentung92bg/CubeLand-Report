/* IL2CPP: Rotatelab.Scripts.BlasterController$$TryBreakChains
void Rotatelab_Scripts_BlasterController__TryBreakChains (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$TryBreakChains
   void Rotatelab_Scripts_BlasterController__TryBreakChains (Rotatelab_Scripts_BlasterController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__TryBreakChains_1033a90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 auStack_28 [16];
  
  pcVar3 = (char *)(_UNK_01043c4c + 0x1043aa8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043c50 + 0x1043abc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043c54 + 0x1043ac8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043c58 + 0x1043ad4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043c5c + 0x1043ae0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043c60 + 0x1043aec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043c64 + 0x1043af8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043c68 + 0x1043b04));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 0xc4) != '\0') {
    piVar7 = *(int **)(_UNK_01043c6c + 0x1043b24);
    iVar4 = *(int *)(param_1 + 0x124);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x5c);
    iVar5 = puVar2[4];
    if (iVar5 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
      }
      uVar6 = *puVar2;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01043c70 + 0x1043b70));
      System_Predicate_object____ctor_1876380
                (iVar5,uVar6,**(undefined4 **)(_UNK_01043c74 + 0x1043b90),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0x10);
      *piVar7 = iVar5;
      thunk_FUN_00ec5080(piVar7,iVar5);
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___TrueForAll_267f8d8
                      (iVar4,iVar5,**(undefined4 **)(_UNK_01043c78 + 0x1043bc8));
    if (iVar1 != 0) {
      uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01043c7c + 0x1043be4));
      System_Action___ctor_2b10bac(uVar6,param_1,**(undefined4 **)(_UNK_01043c80 + 0x1043c04),0);
      if (*(int *)(**(int **)(_UNK_01043c84 + 0x1043c18) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Delay_2ce9f2c(auStack_28,0x3e800000,uVar6,0,0,0);
    }
  }
  return;
}

