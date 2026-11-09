/* IL2CPP: Rotatelab.CloudRush.CloudRushManager.<MoveNextCoroutine>d__58$$MoveNext
bool Rotatelab_CloudRush_CloudRushManager__MoveNextCoroutine_d__58__MoveNext (Rotatelab_CloudRush_CloudRushManager__MoveNextCoroutine_d__58_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager.<MoveNextCoroutine>d__58$$MoveNext
   bool Rotatelab_CloudRush_CloudRushManager__MoveNextCoroutine_d__58__MoveNext
   (Rotatelab_CloudRush_CloudRushManager__MoveNextCoroutine_d__58_o* __this, const MethodInfo*
   method); */

undefined4
Rotatelab_CloudRush_CloudRushManager__MoveNextCoroutine_d__58__MoveNext_10e2094(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar7 = (char *)(_UNK_010f27d4 + 0x10f20b0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f27d8 + 0x10f20c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f27dc + 0x10f20d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f27e0 + 0x10f20dc));
    *pcVar7 = '\x01';
  }
  if (6 < *(uint *)(param_1 + 8)) {
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  switch(*(uint *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar5 = UnityEngine_Time__get_time_3610900(0);
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar8 + 0xb4) == '\0') {
      if (*(int *)(iVar8 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar11 = *(undefined4 **)(&UNK_010f216c + _UNK_010f27e4);
      iVar9 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(iVar8 + 0x70),0,*puVar11);
      if (*(int *)(iVar8 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = System_Collections_Generic_List_object___get_Item_267d814
                         (*(int *)(iVar8 + 0x78),*(undefined4 *)(iVar8 + 0xa4),
                          **(undefined4 **)(&UNK_010f2198 + _UNK_010f27e8));
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushCloudController__GetPlayerAvatarPosition_10db6f0
                (&uStack_38,iVar10,0);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar2 = (float)Rotatelab_CloudRush_CloudRushPlayerAvatarController__MoveInProgression_10e2820
                               (iVar9,uStack_38,uStack_34);
      fVar12 = *(float *)(param_1 + 0x14);
      fVar3 = (float)UnityEngine_Time__get_time_3610900(0);
      iVar8 = *(int *)(iVar8 + 0x70);
      fVar4 = fVar2 + fVar3;
      if (fVar2 + fVar3 < fVar12) {
        fVar4 = fVar12;
      }
      *(float *)(param_1 + 0x14) = fVar4;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = System_Collections_Generic_List_object___get_Item_267d814(iVar8,0,*puVar11);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = *(undefined4 *)(iVar8 + 0x28);
      if (*(int *)(**(int **)(&UNK_010f2244 + _UNK_010f27ec) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar5 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(uVar5,0);
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      thunk_FUN_00ec5080();
      uVar5 = 1;
      goto code_r0x010f27bc;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    break;
  case 2:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar9 = *(int *)(param_1 + 0x18) + 1;
    goto code_r0x010f22c4;
  case 3:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    goto code_r0x010f2600;
  case 4:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar9 = *(int *)(param_1 + 0x18) + 1;
    goto code_r0x010f2604;
  case 5:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar8 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar8 + 0x78),*(undefined4 *)(iVar8 + 0x9c),
                       **(undefined4 **)(&UNK_010f2318 + _UNK_010f281c));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar2 = (float)Rotatelab_CloudRush_CloudRushCloudController__SetVisibility_10db3b0(iVar8,0,0);
    fVar12 = *(float *)(param_1 + 0x14);
    fVar3 = (float)UnityEngine_Time__get_time_3610900(0);
    fVar4 = fVar2 + fVar3;
    if (fVar2 + fVar3 < fVar12) {
      fVar4 = fVar12;
    }
    *(float *)(param_1 + 0x14) = fVar4;
    goto code_r0x010f2374;
  case 6:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
code_r0x010f2374:
    fVar4 = (float)UnityEngine_Time__get_time_3610900(0);
    if (*(float *)(param_1 + 0x14) <= fVar4) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080();
    uVar5 = 6;
    goto code_r0x010f27bc;
  }
  iVar9 = 1;
code_r0x010f22c4:
  *(int *)(param_1 + 0x18) = iVar9;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_CloudRush_CloudRushManager__get_VisiblePlayerCountInPlayerPool_10dfc94(iVar8);
  iVar6 = *(int *)(iVar8 + 0x9c);
  iVar10 = iVar1;
  if (iVar6 != 6) {
    iVar10 = 0;
  }
  if (iVar6 == 6 || iVar6 == 0) {
    iVar10 = *(int *)(iVar8 + 0xb0);
  }
  if (iVar9 < iVar1 - iVar10) {
    if (*(int *)(iVar8 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar8 + 0x70),*(undefined4 *)(param_1 + 0x18),
                       **(undefined4 **)(&UNK_010f2404 + _UNK_010f27f0));
    if (*(int *)(iVar8 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar8 + 0x78),*(undefined4 *)(iVar8 + 0xa4),
                       **(undefined4 **)(&UNK_010f2434 + _UNK_010f27f4));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushCloudController__GetPlayerAvatarPosition_10db6f0
              (&uStack_38,iVar8,*(undefined4 *)(param_1 + 0x18));
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar2 = (float)Rotatelab_CloudRush_CloudRushPlayerAvatarController__MoveInProgression_10e2820
                             (iVar9,uStack_38,uStack_34);
    fVar12 = *(float *)(param_1 + 0x14);
    fVar3 = (float)UnityEngine_Time__get_time_3610900(0);
    iVar8 = *(int *)(**(int **)(&UNK_010f24a4 + _UNK_010f27f8) + 0x74);
    fVar4 = fVar2 + fVar3;
    if (fVar2 + fVar3 < fVar12) {
      fVar4 = fVar12;
    }
    *(float *)(param_1 + 0x14) = fVar4;
    if (iVar8 == 0) {
      FUN_00ec3934();
    }
    uVar5 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3cf5c28f,0);
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    thunk_FUN_00ec5080();
    uVar5 = 2;
  }
  else if (*(char *)(iVar8 + 0xb4) == '\0') {
code_r0x010f2600:
    iVar9 = 0;
code_r0x010f2604:
    *(int *)(param_1 + 0x18) = iVar9;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar9 < *(int *)(iVar8 + 0xb0)) {
      if (*(int *)(iVar8 + 0x9c) == 6 || *(int *)(iVar8 + 0x9c) == 0) {
        iVar10 = *(int *)(iVar8 + 0x70);
        iVar9 = Rotatelab_CloudRush_CloudRushManager__get_VisiblePlayerCountInPlayerPool_10dfc94
                          (iVar8);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar5 = **(undefined4 **)(&UNK_010f265c + _UNK_010f2808);
        iVar9 = iVar9 + ~*(uint *)(param_1 + 0x18);
      }
      else {
        iVar10 = *(int *)(iVar8 + 0x74);
        iVar9 = *(int *)(param_1 + 0x18);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar5 = **(undefined4 **)(&UNK_010f26d4 + _UNK_010f280c);
      }
      iVar9 = System_Collections_Generic_List_object___get_Item_267d814(iVar10,iVar9,uVar5);
      if (*(int *)(iVar8 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(iVar8 + 0x78),*(undefined4 *)(iVar8 + 0x9c),
                         **(undefined4 **)(&UNK_010f2704 + _UNK_010f2810));
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushCloudController__GetDropPosition_10dba10
                (&uStack_38,iVar8,*(undefined4 *)(param_1 + 0x18));
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar2 = (float)Rotatelab_CloudRush_CloudRushPlayerAvatarController__DropInProgression_10e3160
                               (iVar9,uStack_38,uStack_34);
      fVar12 = *(float *)(param_1 + 0x14);
      fVar3 = (float)UnityEngine_Time__get_time_3610900(0);
      fVar4 = fVar2 + fVar3;
      if (fVar2 + fVar3 < fVar12) {
        fVar4 = fVar12;
      }
      *(float *)(param_1 + 0x14) = fVar4;
      if (*(int *)(**(int **)(&UNK_010f2788 + _UNK_010f2814) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar5 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3cf5c28f,0);
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      thunk_FUN_00ec5080();
      uVar5 = 4;
    }
    else {
      if (*(int *)(**(int **)(&UNK_010f2678 + _UNK_010f2818) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar5 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e99999a,0);
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      thunk_FUN_00ec5080();
      uVar5 = 5;
    }
  }
  else {
    if (*(int *)(iVar8 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar8 + 0x70),0,**(undefined4 **)(&UNK_010f2518 + _UNK_010f27fc));
    if (*(int *)(iVar8 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = System_Collections_Generic_List_object___get_Item_267d814
                       (*(int *)(iVar8 + 0x78),*(undefined4 *)(iVar8 + 0x9c),
                        **(undefined4 **)(&UNK_010f2548 + _UNK_010f2800));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushCloudController__GetDropPosition_10dba10
              (&uStack_38,iVar10,*(undefined4 *)(iVar8 + 0xb0));
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar2 = (float)Rotatelab_CloudRush_CloudRushPlayerAvatarController__DropInProgression_10e3160
                             (iVar9,uStack_38,uStack_34);
    fVar12 = *(float *)(param_1 + 0x14);
    fVar3 = (float)UnityEngine_Time__get_time_3610900(0);
    iVar8 = *(int *)(**(int **)(&UNK_010f25b8 + _UNK_010f2804) + 0x74);
    fVar4 = fVar2 + fVar3;
    if (fVar2 + fVar3 < fVar12) {
      fVar4 = fVar12;
    }
    *(float *)(param_1 + 0x14) = fVar4;
    if (iVar8 == 0) {
      FUN_00ec3934();
    }
    uVar5 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3cf5c28f,0);
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    thunk_FUN_00ec5080();
    uVar5 = 3;
  }
code_r0x010f27bc:
  *(undefined4 *)(param_1 + 8) = uVar5;
  return 1;
}

