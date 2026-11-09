/* IL2CPP: Rotatelab.FX.IDimEffectTarget$$<DimWithFilter>g__AddRenderersOf|5_0
void Rotatelab_FX_IDimEffectTarget___DimWithFilter_g__AddRenderersOf_5_0 (UnityEngine_Component_o* component, Rotatelab_FX_IDimEffectTarget___c__DisplayClass5_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0110c5fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.IDimEffectTarget$$<DimWithFilter>g__AddRenderersOf|5_0
   void Rotatelab_FX_IDimEffectTarget___DimWithFilter_g__AddRenderersOf_5_0
   (UnityEngine_Component_o* component, Rotatelab_FX_IDimEffectTarget___c__DisplayClass5_0_o* ,
   const MethodInfo* method); */

void Rotatelab_FX_IDimEffectTarget___DimWithFilter_g__AddRenderersOf_5_0_10fcbc4
               (int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
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
  int aiStack_24 [3];
  
  pcVar7 = (char *)(_UNK_0110cd88 + 0x110cbdc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cd8c + 0x110cbf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cd90 + 0x110cbfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cd94 + 0x110cc08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cd98 + 0x110cc14));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0110cd9c + 0x110cc28) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_1,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    uVar6 = (uint)*(byte *)(**(int **)(_UNK_0110cda0 + 0x110cc64) + 0xb8);
    if ((uVar6 <= *(byte *)(*param_1 + 0xb8)) &&
       (*(int *)(*(int *)(*param_1 + 100) + uVar6 * 4 + -4) == **(int **)(_UNK_0110cda0 + 0x110cc64)
       )) goto LAB_0110ccbc;
  }
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_HashSet_object___Add_2420ac8
                    (*param_2,param_1,**(undefined4 **)(_UNK_0110cda4 + 0x110ccac));
  if (iVar1 == 0) {
    return;
  }
LAB_0110ccbc:
  iVar1 = param_2[1];
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(iVar1 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x20),param_1,*(undefined4 *)(iVar1 + 0x14));
  if (iVar1 == 0) {
    return;
  }
  piVar8 = *(int **)(_UNK_0110cda8 + 0x110ccf8);
  piVar2 = (int *)thunk_FUN_00f00bc8(param_1,*piVar8);
  iVar1 = param_2[2];
  if (piVar2 == (int *)0x0) {
    pcVar7 = (char *)(_UNK_0110c6c8 + 0x110c408);
    if (*pcVar7 == '\0') {
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
      *pcVar7 = '\x01';
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
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Component__GetComponentsInChildren_object__143ff6c
              (param_1,aiStack_24[0],**(undefined4 **)(_UNK_0110c6fc + 0x110c518));
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
    puVar4 = *(undefined4 **)(_UNK_0110c704 + 0x110c574);
    puVar9 = *(undefined4 **)(_UNK_0110c708 + 0x110c57c);
    puVar10 = *(undefined4 **)(_UNK_0110c70c + 0x110c584);
    puStack_5c = &uStack_40;
    while( true ) {
      iVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_40,*puVar4);
      iVar3 = iStack_34;
      if (iVar5 == 0) {
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
      iVar5 = UnityEngine_Component__TryGetComponent_object__14402fc(iStack_34,&uStack_44,*puVar9);
      if (iVar5 == 0) {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_HashSet_object___Add_2420ac8(iVar1,iVar3,*puVar10);
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *piVar2;
  iVar5 = *piVar8;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar5) {
        puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 200);
        goto LAB_0110cd70;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar2,iVar5,1);
LAB_0110cd70:
                    /* WARNING: Could not recover jumptable at 0x0110cd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(piVar2,iVar1,puVar4[1]);
  return;
}

