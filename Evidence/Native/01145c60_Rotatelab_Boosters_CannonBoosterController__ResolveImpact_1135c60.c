/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$ResolveImpact
void Rotatelab_Boosters_CannonBoosterController__ResolveImpact (Rotatelab_Boosters_CannonBoosterController_o* __this, System_Collections_Generic_List_BaseTargetableController__o* targets, UnityEngine_Vector3_o impactPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$ResolveImpact
   void Rotatelab_Boosters_CannonBoosterController__ResolveImpact
   (Rotatelab_Boosters_CannonBoosterController_o* __this,
   System_Collections_Generic_List_BaseTargetableController__o* targets, UnityEngine_Vector3_o
   impactPoint, const MethodInfo* method); */

void Rotatelab_Boosters_CannonBoosterController__ResolveImpact_1135c60
               (int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  int iStack_34;
  
  pcVar5 = (char *)(_UNK_011463dc + 0x1145c88);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011463e0 + 0x1145ca0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011463e4 + 0x1145cac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011463e8 + 0x1145cb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011463ec + 0x1145cc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011463f0 + 0x1145cd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011463f4 + 0x1145cdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011463f8 + 0x1145ce8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011463fc + 0x1145cf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146400 + 0x1145d00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146404 + 0x1145d0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146408 + 0x1145d18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114640c + 0x1145d24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146410 + 0x1145d30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146414 + 0x1145d3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146418 + 0x1145d48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114641c + 0x1145d54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146420 + 0x1145d60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146424 + 0x1145d6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146428 + 0x1145d78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114642c + 0x1145d84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146430 + 0x1145d90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146434 + 0x1145d9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146438 + 0x1145da8));
    *pcVar5 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar6 = *(int **)(_UNK_0114643c + 0x1145dc8);
  uStack_50 = 0;
  iVar2 = *piVar6;
  iStack_34 = 0;
  uStack_40 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xc0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Vector3___Raise_23a3428
            (iVar2,param_3,param_4,param_5,**(undefined4 **)(_UNK_01146440 + 0x1145e2c));
  if (param_1[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_Int32Enum__int___Clear_1ff9ca8
            (param_1[0xc],**(undefined4 **)(_UNK_01146444 + 0x1145e58));
  iVar2 = 0;
  puVar9 = *(undefined4 **)(_UNK_01146448 + 0x1145e74);
  puVar10 = *(undefined4 **)(_UNK_0114644c + 0x1145e7c);
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = param_1[0xc];
    if (*(int *)(param_2 + 0xc) <= iVar2) {
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_Int32Enum__int___GetEnumerator_1ff9f50
                (&uStack_78,iVar7,**(undefined4 **)(_UNK_01146458 + 0x1145f64));
      uStack_50 = uStack_78;
      uStack_4c = puStack_74;
      uStack_48 = uStack_70;
      uStack_44 = uStack_6c;
      uStack_40 = uStack_68;
      uStack_78 = 0;
      puVar9 = *(undefined4 **)(_UNK_0114645c + 0x1145fa8);
      puStack_74 = &uStack_50;
      while (iVar2 = System_Collections_Generic_Dictionary_Enumerator_Int32Enum__int___MoveNext_21dbd5c
                               (&uStack_50,**(undefined4 **)(_UNK_01146464 + 0x1145fb0)), iVar2 != 0
            ) {
        uStack_54 = (undefined4)uStack_40;
        uStack_58 = uStack_44;
        System_Collections_Generic_KeyValuePair_Int32Enum__int___Deconstruct_255eeb8
                  (&uStack_58,&uStack_5c,&uStack_60,**(undefined4 **)(_UNK_01146460 + 0x1145fd0));
        uVar1 = uStack_5c;
        uVar4 = uStack_60;
        iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Scripts_PlaceableManager__ConsumeBulletsOfQueuedBlastersExternally_104903c
                  (iVar2,uVar1,uVar4,0,0);
      }
      System_Collections_Generic_Dictionary_Enumerator_Int32Enum__int___Dispose_21dbe94
                (&uStack_50,**(undefined4 **)(_UNK_01146468 + 0x1146034));
      iVar2 = 0;
      puVar9 = *(undefined4 **)(_UNK_01146470 + 0x1146050);
      piVar6 = *(int **)(_UNK_01146474 + 0x1146058);
      while( true ) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(param_2 + 0xc) <= iVar2) break;
        iVar7 = thunk_FUN_00f00cdc(*puVar9);
        System_Object___ctor_2bb93bc(iVar7,0);
        iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                          (param_2,iVar2,**(undefined4 **)(_UNK_01146478 + 0x1146090));
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar8 = (int *)(iVar7 + 8);
        *piVar8 = iVar3;
        thunk_FUN_00ec5080(piVar8,iVar3);
        iVar3 = *piVar8;
        if (*(int *)(*piVar6 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = UnityEngine_Object__op_Equality_36033f4(iVar3,0,0);
        if (iVar3 == 0) {
          if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(char *)(*piVar8 + 0x18) == '\0') {
            fVar12 = (float)param_1[7];
            uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114647c + 0x1146114));
            System_Action_object____ctor_1f11414
                      (uVar4,iVar7,**(undefined4 **)(_UNK_01146480 + 0x1146138),0);
            if (*(int *)(**(int **)(_UNK_01146484 + 0x114614c) + 0x74) == 0) {
              FUN_00ec3934();
            }
            fVar11 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
            PrimeTween_Tween__Delay_object__15d6154
                      (&uStack_78,param_1,fVar12 * fVar11,uVar4,0,0,
                       **(undefined4 **)(_UNK_01146488 + 0x1146178));
          }
        }
        iVar2 = iVar2 + 1;
      }
      piVar6 = *(int **)(_UNK_0114648c + 0x11461a8);
      iVar2 = *piVar6;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar6;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xa8);
      uVar4 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_Int32Enum___Raise_23a2cdc
                (iVar2,uVar4,**(undefined4 **)(_UNK_01146490 + 0x11461fc));
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01146494 + 0x1146210));
      uVar4 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4(iVar2,uVar4,0);
      uVar13 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar4,0);
      iVar7 = (int)((ulonglong)uVar13 >> 0x20);
      iVar2 = (int)uVar13;
      if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Boosters_CannonRig__SetAmmoCount_1134b40(param_1[4],iVar2);
      if ((int)-(iVar7 + (uint)(iVar2 != 0)) < 0 ==
          (SBORROW4(0,iVar7) != SBORROW4(-iVar7,(uint)(iVar2 != 0)))) {
        piVar6 = *(int **)(_UNK_01146498 + 0x114629c);
        iVar7 = param_1[8];
        iVar2 = *piVar6;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar6;
        }
        puVar9 = *(undefined4 **)(iVar2 + 0x5c);
        iVar3 = puVar9[1];
        if (iVar3 == 0) {
          if (*(int *)(iVar2 + 0x74) == 0) {
            FUN_00ec3934();
            puVar9 = *(undefined4 **)(*piVar6 + 0x5c);
          }
          uVar4 = *puVar9;
          iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114649c + 0x11462e8));
          System_Action_object____ctor_1f11414
                    (iVar3,uVar4,**(undefined4 **)(_UNK_011464a0 + 0x1146308),0);
          piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
          *piVar6 = iVar3;
          thunk_FUN_00ec5080(piVar6,iVar3);
        }
        if (*(int *)(**(int **)(_UNK_011464a4 + 0x1146330) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__Delay_object__15d6154
                  (&uStack_78,param_1,iVar7,iVar3,0,0,**(undefined4 **)(_UNK_011464a8 + 0x1146358));
      }
      else {
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      return;
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (param_2,iVar2,**(undefined4 **)(_UNK_01146450 + 0x1145ea8));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar7 == 0) break;
    System_Collections_Generic_Dictionary_Int32Enum__int___TryGetValue_1ffb8dc
              (iVar7,*(undefined4 *)(iVar3 + 0x14),&iStack_34,*puVar9);
    iVar3 = param_1[0xc];
    iVar7 = System_Collections_Generic_List_object___get_Item_267d814
                      (param_2,iVar2,**(undefined4 **)(_UNK_01146454 + 0x1145efc));
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_Int32Enum__int___set_Item_1ff9aa4
              (iVar3,*(undefined4 *)(iVar7 + 0x14),iStack_34 + 1,*puVar10);
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

