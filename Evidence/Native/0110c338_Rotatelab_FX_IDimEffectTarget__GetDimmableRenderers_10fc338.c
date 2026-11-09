/* IL2CPP: Rotatelab.FX.IDimEffectTarget$$GetDimmableRenderers
void Rotatelab_FX_IDimEffectTarget__GetDimmableRenderers (Rotatelab_FX_IDimEffectTarget_o* __this, System_Collections_Generic_HashSet_Renderer__o* renderers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0110c5fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.IDimEffectTarget$$GetDimmableRenderers
   void Rotatelab_FX_IDimEffectTarget__GetDimmableRenderers (Rotatelab_FX_IDimEffectTarget_o*
   __this, System_Collections_Generic_HashSet_Renderer__o* renderers, const MethodInfo* method); */

void Rotatelab_FX_IDimEffectTarget__GetDimmableRenderers_10fc338(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_24 [4];
  
  pcVar6 = (char *)(_UNK_0110c3e0 + 0x110c350);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c3e4 + 0x110c364));
    *pcVar6 = '\x01';
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0110c3e8 + 0x110c37c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_0110c3c4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,**(int **)(_UNK_0110c3e8 + 0x110c37c),0);
LAB_0110c3c4:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  pcVar6 = (char *)(_UNK_0110c6c8 + 0x110c408);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c6cc + 0x110c41c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c6d0 + 0x110c428));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c6d4 + 0x110c434));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c6d8 + 0x110c440));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c6dc + 0x110c44c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c6e0 + 0x110c458));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c6e4 + 0x110c464));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c6e8 + 0x110c470));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c6ec + 0x110c47c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c6f0 + 0x110c488));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_24[0] = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  if (*(int *)(**(int **)(_UNK_0110c6f4 + 0x110c4a8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_ListPool_object___Get_257b7b0
            (&uStack_60,aiStack_24,**(undefined4 **)(_UNK_0110c6f8 + 0x110c4dc));
  uStack_2c = puStack_5c;
  puStack_48 = &uStack_30;
  uStack_30 = uStack_60;
  iStack_4c = 0;
  if (iVar1 != 0) {
    UnityEngine_Component__GetComponentsInChildren_object__143ff6c
              (iVar1,aiStack_24[0],**(undefined4 **)(_UNK_0110c6fc + 0x110c518));
    if (aiStack_24[0] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_60,aiStack_24[0],**(undefined4 **)(_UNK_0110c700 + 0x110c540));
    uStack_40 = uStack_60;
    uStack_3c = puStack_5c;
    uStack_38 = uStack_58;
    iStack_34 = iStack_54;
    uStack_60 = 0;
    puVar2 = *(undefined4 **)(_UNK_0110c704 + 0x110c574);
    puVar7 = *(undefined4 **)(_UNK_0110c708 + 0x110c57c);
    puVar8 = *(undefined4 **)(_UNK_0110c70c + 0x110c584);
    puStack_5c = &uStack_40;
    while( true ) {
      iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_40,*puVar2);
      iVar1 = iStack_34;
      if (iVar3 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_40,**(undefined4 **)(_UNK_0110c710 + 0x110c5ec));
        iVar1 = iStack_4c;
        Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
                  (puStack_48,**(undefined4 **)(_UNK_0110c714 + 0x110c614));
        if (iVar1 != 0) {
          FUN_00ec3a6c(iVar1);
        }
        return;
      }
      if (iStack_34 == 0) break;
      iVar3 = UnityEngine_Component__TryGetComponent_object__14402fc(iStack_34,&uStack_44,*puVar7);
      if (iVar3 == 0) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_HashSet_object___Add_2420ac8(param_2,iVar1,*puVar8);
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

