/* IL2CPP: Rotatelab.Scripts.BlasterController$$SwingChains
void Rotatelab_Scripts_BlasterController__SwingChains (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$SwingChains
   void Rotatelab_Scripts_BlasterController__SwingChains (Rotatelab_Scripts_BlasterController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__SwingChains_1033814(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_01043a4c + 0x104382c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043a50 + 0x1043840));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043a54 + 0x104384c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043a58 + 0x1043858));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043a5c + 0x1043864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043a60 + 0x1043870));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043a64 + 0x104387c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043a68 + 0x1043888));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043a6c + 0x1043894));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x124) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,*(int *)(param_1 + 0x124),**(undefined4 **)(_UNK_01043a70 + 0x10438cc));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  uStack_48 = 0;
  puVar9 = *(undefined4 **)(_UNK_01043a74 + 0x10438f4);
  piVar4 = *(int **)(_UNK_01043a78 + 0x10438fc);
  puVar11 = *(undefined4 **)(_UNK_01043a7c + 0x1043904);
  puVar10 = *(undefined4 **)(_UNK_01043a80 + 0x104390c);
  puStack_44 = &uStack_38;
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_38,*puVar9)
    ;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_01043a88 + 0x10439d8));
      return;
    }
    if (iStack_2c == 0) break;
    iVar1 = *piVar4;
    iVar6 = *(int *)(iStack_2c + 0x11c);
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x5c);
    iVar7 = puVar3[3];
    if (iVar7 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar4 + 0x5c);
      }
      uVar8 = *puVar3;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01043a84 + 0x1043980));
      System_Action_object____ctor_1f11414(iVar7,uVar8,*puVar11,0);
      piVar2 = (int *)(*(int *)(*piVar4 + 0x5c) + 0xc);
      *piVar2 = iVar7;
      thunk_FUN_00ec5080(piVar2,iVar7);
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___ForEach_267e6f0(iVar6,iVar7,*puVar10);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

