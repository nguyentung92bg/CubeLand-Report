/* IL2CPP: Rotatelab.Scripts.BombController.<AnimateExplosionCoroutine>d__25$$MoveNext
bool Rotatelab_Scripts_BombController__AnimateExplosionCoroutine_d__25__MoveNext (Rotatelab_Scripts_BombController__AnimateExplosionCoroutine_d__25_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BombController.<AnimateExplosionCoroutine>d__25$$MoveNext
   bool Rotatelab_Scripts_BombController__AnimateExplosionCoroutine_d__25__MoveNext
   (Rotatelab_Scripts_BombController__AnimateExplosionCoroutine_d__25_o* __this, const MethodInfo*
   method); */

undefined4
Rotatelab_Scripts_BombController__AnimateExplosionCoroutine_d__25__MoveNext_ff79cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iStack_60;
  undefined4 *puStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01008104 + 0x10079e4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008108 + 0x10079f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100810c + 0x1007a04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008110 + 0x1007a10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008114 + 0x1007a1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008118 + 0x1007a28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100811c + 0x1007a34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008120 + 0x1007a40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008124 + 0x1007a4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008128 + 0x1007a58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100812c + 0x1007a64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008130 + 0x1007a70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008134 + 0x1007a7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008138 + 0x1007a88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100813c + 0x1007a94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008140 + 0x1007aa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008144 + 0x1007aac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008148 + 0x1007ab8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100814c + 0x1007ac4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008150 + 0x1007ad0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008154 + 0x1007adc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008158 + 0x1007ae8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100815c + 0x1007af4));
    *pcVar6 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar1 = 0;
  piVar10 = *(int **)(param_1 + 0x10);
  iStack_28 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  iStack_2c = 0;
  uStack_34 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(**(int **)(_UNK_01008178 + 0x1007ce4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Stop_2ced694(piVar10 + 0x1c,0);
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (piVar10[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_transform_35fe190(piVar10[0xf],0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_parent_36156e4(iVar2,0,0);
    if (piVar10[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = 0;
    UnityEngine_ParticleSystem__Play_368e960(piVar10[0xf],0);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0100817c + 0x1007d74));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar2,0x1c,0);
    piVar7 = *(int **)(_UNK_01008180 + 0x1007da8);
    while( true ) {
      if (piVar10[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(piVar10[0x13] + 0xc) <= iVar5) break;
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01008184 + 0x1007dcc));
      if (piVar10[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_Vector3Int___get_Item_26ff740
                (&iStack_60,piVar10[0x13],iVar5,**(undefined4 **)(_UNK_01008188 + 0x1007df8));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar3 = (int *)Rotatelab_Grid_GridManager__GetGridCellContent_object__1492b18
                                (iVar2,iStack_60,puStack_5c,iStack_58,
                                 **(undefined4 **)(_UNK_0100818c + 0x1007e30));
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = UnityEngine_Object__op_Implicit_3607ff4(piVar3,0);
      if (iVar2 != 0) {
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((char)piVar3[6] == '\0') {
          if (piVar10[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = System_Collections_Generic_Dictionary_Int32Enum__int___ContainsKey_1ff9d18
                            (piVar10[0x14],piVar3[5],**(undefined4 **)(_UNK_01008190 + 0x1007ea4));
          if (iVar2 == 0) {
            if (piVar10[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Collections_Generic_Dictionary_Int32Enum__int___Add_1ff9acc
                      (piVar10[0x14],piVar3[5],0,**(undefined4 **)(_UNK_01008194 + 0x1007edc));
          }
          iVar8 = piVar10[0x14];
          iVar2 = piVar3[5];
          iStack_28 = iVar2;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iStack_2c = System_Collections_Generic_Dictionary_Int32Enum__int___get_Item_1ff9a14
                                (iVar8,iVar2,**(undefined4 **)(_UNK_01008198 + 0x1007f08));
          System_Collections_Generic_Dictionary_Int32Enum__int___set_Item_1ff9aa4
                    (iVar8,iVar2,iStack_2c + 1,**(undefined4 **)(_UNK_010081a0 + 0x1007f58));
          (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
          (**(code **)(*piVar3 + 0x118))(piVar3,*(undefined4 *)(*piVar3 + 0x11c));
        }
      }
      iVar5 = iVar5 + 1;
    }
    if (piVar10[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_Int32Enum__int___GetEnumerator_1ff9f50
              (&uStack_48,piVar10[0x14],**(undefined4 **)(_UNK_010081a4 + 0x1007fb8));
    iStack_60 = 0;
    puVar4 = *(undefined4 **)(_UNK_010081a8 + 0x1007fe4);
    puVar9 = *(undefined4 **)(_UNK_010081ac + 0x1007fec);
    puStack_5c = &uStack_48;
    while (iVar2 = System_Collections_Generic_Dictionary_Enumerator_Int32Enum__int___MoveNext_21dbd5c
                             (&uStack_48,*puVar4), iVar2 != 0) {
      uStack_4c = uStack_38;
      uStack_50 = uStack_3c;
      System_Collections_Generic_KeyValuePair_Int32Enum__int___Deconstruct_255eeb8
                (&uStack_50,&iStack_28,&iStack_2c,**(undefined4 **)(_UNK_010081b0 + 0x100800c));
      iVar5 = iStack_28;
      iVar2 = iStack_2c;
      iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_PlaceableManager__ConsumeBulletsOfQueuedBlastersExternally_104903c
                (iVar8,iVar5,iVar2,1,0);
    }
    System_Collections_Generic_Dictionary_Enumerator_Int32Enum__int___Dispose_21dbe94
              (&uStack_48,**(undefined4 **)(_UNK_010081b4 + 0x1008070));
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar10 + 0x138))(piVar10,*(undefined4 *)(*piVar10 + 0x13c));
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    piVar7 = *(int **)(_UNK_01008160 + 0x1007b4c);
    iVar2 = *piVar7;
    iVar5 = *(int *)(iVar2 + 0x74);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar5 == 0) {
      FUN_00ec3934();
      iVar2 = *piVar7;
    }
    puVar4 = *(undefined4 **)(iVar2 + 0x5c);
    iVar5 = puVar4[2];
    if (iVar5 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
      }
      uVar1 = *puVar4;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01008164 + 0x1007b98));
      System_Action_object__float____ctor_1f19254
                (iVar5,uVar1,**(undefined4 **)(_UNK_01008168 + 0x1007bb8),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
      *piVar7 = iVar5;
      thunk_FUN_00ec5080(piVar7,iVar5);
    }
    if (*(int *)(**(int **)(_UNK_0100816c + 0x1007be0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_object__15d5b3c
              (&iStack_60,piVar10,0,0x3f000000,0x3e4ccccd,iVar5,0,0,0,0,0,0xffffffff,1,0,0,0,
               **(undefined4 **)(_UNK_01008170 + 0x1007c0c));
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar10[0x1c] = iStack_60;
    piVar10[0x1d] = (int)puStack_5c;
    piVar10[0x1e] = iStack_58;
    piVar10[0x1f] = iStack_54;
    thunk_FUN_00ec5080(piVar10 + 0x1e,0);
    if (*(int *)(**(int **)(_UNK_01008174 + 0x1007c88) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3f800000,0);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar1);
    uVar1 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar1;
}

