/* IL2CPP: Rotatelab.SeasonPass.SeasonPassSo$$OnValidate
void Rotatelab_SeasonPass_SeasonPassSo__OnValidate (Rotatelab_SeasonPass_SeasonPassSo_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassSo$$OnValidate
   void Rotatelab_SeasonPass_SeasonPassSo__OnValidate (Rotatelab_SeasonPass_SeasonPassSo_o* __this,
   const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassSo__OnValidate_10a2020(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_010b2264 + 0x10b2038);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2268 + 0x10b204c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b226c + 0x10b2058));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2270 + 0x10b2064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2274 + 0x10b2070));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2278 + 0x10b207c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b227c + 0x10b2088));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2280 + 0x10b2094));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2284 + 0x10b20a0));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,*(int *)(param_1 + 0xc),**(undefined4 **)(_UNK_010b2288 + 0x10b20d8));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  uStack_48 = 0;
  puVar6 = *(undefined4 **)(_UNK_010b228c + 0x10b2100);
  puVar7 = *(undefined4 **)(_UNK_010b2290 + 0x10b2108);
  puVar5 = *(undefined4 **)(_UNK_010b2294 + 0x10b2110);
  puStack_44 = &uStack_38;
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_38,*puVar6)
    ;
    iVar4 = iStack_2c;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_010b22a0 + 0x10b21f0));
      return;
    }
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iStack_2c + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*(int *)(iStack_2c + 8) + 0xc);
    uVar2 = thunk_FUN_00f00cdc(*puVar7);
    System_Action_object____ctor_1f11414
              (uVar2,param_1,**(undefined4 **)(_UNK_010b2298 + 0x10b215c),0);
    if (iVar1 == 0) break;
    System_Collections_Generic_List_object___ForEach_267e6f0(iVar1,uVar2,*puVar5);
    if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 0xc);
    uVar2 = thunk_FUN_00f00cdc(*puVar7);
    System_Action_object____ctor_1f11414
              (uVar2,param_1,**(undefined4 **)(_UNK_010b229c + 0x10b21b4),0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___ForEach_267e6f0(iVar4,uVar2,*puVar5);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

