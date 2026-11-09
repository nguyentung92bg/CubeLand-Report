/* IL2CPP: Rotatelab.UI.GenericDialog$$<ShowWithinScopeWithNoButtons>b__13_0
void Rotatelab_UI_GenericDialog___ShowWithinScopeWithNoButtons_b__13_0 (Rotatelab_UI_GenericDialog_o* __this, Rotatelab_UI_GenericDialog_DialogData_o* dialog, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$<ShowWithinScopeWithNoButtons>b__13_0
   void Rotatelab_UI_GenericDialog___ShowWithinScopeWithNoButtons_b__13_0
   (Rotatelab_UI_GenericDialog_o* __this, Rotatelab_UI_GenericDialog_DialogData_o* dialog, const
   MethodInfo* method); */

uint Rotatelab_UI_GenericDialog___ShowWithinScopeWithNoButtons_b__13_0_1112778
               (int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 unaff_r4;
  undefined4 uVar7;
  undefined4 unaff_r5;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 unaff_r6;
  char *pcVar10;
  int *piVar11;
  undefined4 unaff_r7;
  
  pcVar10 = (char *)(_UNK_0112291c + 0x1122790);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122920 + 0x11227a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122924 + 0x11227b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122928 + 0x11227bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112292c + 0x11227c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122930 + 0x11227d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122934 + 0x11227e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122938 + 0x11227ec));
    *pcVar10 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112293c + 0x1122800));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar11 = (int *)(iVar1 + 8);
  *piVar11 = param_2;
  thunk_FUN_00ec5080(piVar11,param_2);
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (iVar2 = Rotatelab_UI_GenericDialog_DialogData__ContentEquals_1112574
                        (*(int *)(param_1 + 0x28),*piVar11), iVar2 == 0)) {
    iVar2 = *(int *)(param_1 + 0x2c);
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01122940 + 0x1122864));
    System_Predicate_object____ctor_1876380
              (uVar7,iVar1,**(undefined4 **)(_UNK_01122944 + 0x1122884),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = System_Collections_Generic_List_object___RemoveAll_267f260
                      (iVar2,uVar7,**(undefined4 **)(_UNK_01122948 + 0x11228a8));
    if (uVar4 != 0) {
      return uVar4;
    }
    if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = System_String__Concat_2a0b574
                      (**(undefined4 **)(_UNK_01122950 + 0x11228e4),*(undefined4 *)(*piVar11 + 0xc),
                       **(undefined4 **)(_UNK_0112294c + 0x11228d8),0);
    if (*(int *)(**(int **)(_UNK_01122954 + 0x11228fc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar10 = (char *)(_UNK_035c24ac + 0x35c23a0);
    if (*pcVar10 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24b0 + 0x35c23b4),0);
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24b4 + 0x35c23c0));
      *pcVar10 = '\x01';
    }
    piVar11 = *(int **)(_UNK_035c24b8 + 0x35c23d4);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar10 = (char *)(_UNK_035c24bc + 0x35c23f0);
    if (*pcVar10 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24c0 + 0x35c2404));
      *pcVar10 = '\x01';
    }
    iVar1 = *piVar11;
    if (*(int *)(iVar1 + 0x74) == 0) {
      thunk_FUN_00ec3934();
      iVar1 = *piVar11;
    }
    piVar11 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_035c24c4 + 0x35c2448)) {
          puVar9 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xd8);
          goto LAB_035c2490;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined4 *)thunk_FUN_00efdb38(piVar11,**(int **)(_UNK_035c24c4 + 0x35c2448),3);
LAB_035c2490:
                    /* WARNING: Could not recover jumptable at 0x035c24a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)*puVar9)(piVar11,0,uVar7,puVar9[1]);
    return uVar4;
  }
  pcVar10 = (char *)(_UNK_011211b0 + 0x112104c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011211b4 + 0x1121060));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011211b8 + 0x112106c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011211bc + 0x1121078));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011211c0 + 0x1121084));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011211c4 + 0x1121090));
    *pcVar10 = '\x01';
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x2c) + 0xc) < 1) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    thunk_FUN_00ec5080();
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
    puVar9 = *(undefined4 **)(_UNK_011211d0 + 0x1121144);
    uVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (*(int *)(**(int **)(_UNK_011211d4 + 0x1121158) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar7,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_011211c8 + 0x11210c0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = Rotatelab_Extensions__RemoveAtAndReturn_object__1488144
                      (uVar7,0,**(undefined4 **)(_UNK_011211cc + 0x11210e4));
    pcVar10 = (char *)(_UNK_01122560 + 0x112224c);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01122564 + 0x1122260));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01122568 + 0x112226c));
      *pcVar10 = '\x01';
    }
    piVar11 = *(int **)(param_1 + 0x10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar6 = *(code **)(*piVar11 + 0x2b0);
    (*pcVar6)(piVar11,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(*piVar11 + 0x2b4),pcVar6,unaff_r4,
              unaff_r5,unaff_r6,unaff_r7);
    piVar11 = *(int **)(param_1 + 0x14);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar11 + 0x2b0))
              (piVar11,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(*piVar11 + 0x2b4));
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (*(int *)(param_1 + 0x24),*(undefined4 *)(iVar1 + 0x10),0);
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x24),0);
    piVar11 = *(int **)(_UNK_0112256c + 0x1122328);
    uVar7 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = UnityEngine_Object__op_Inequality_36018e4(uVar7,0,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,uVar7,0);
    if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x14) + 0xc) == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x14);
      piVar8 = *(int **)(param_1 + 0x18);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar8 + 0x2b0))
                (piVar8,*(undefined4 *)(*(int *)(iVar2 + 0x10) + 8),*(undefined4 *)(*piVar8 + 0x2b4)
                );
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = 1;
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,uVar7,0);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x20),0);
    if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,1 < *(int *)(*(int *)(iVar1 + 0x14) + 0xc),0);
    *(int *)(param_1 + 0x28) = iVar1;
    thunk_FUN_00ec5080((int *)(param_1 + 0x28),iVar1);
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
    puVar9 = *(undefined4 **)(_UNK_01122570 + 0x11224f8);
    uVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar7,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = 1;
  }
  pcVar10 = (char *)(_UNK_01027be8 + 0x1027b48);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bec + 0x1027b5c),iVar2,param_1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf0 + 0x1027b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf4 + 0x1027b74));
    *pcVar10 = '\x01';
  }
  piVar11 = *(int **)(iVar1 + 0x1c);
  iVar1 = *(int *)(**(int **)(_UNK_01027bf8 + 0x1027b8c) + 0x74);
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      FUN_00ec3934();
    }
    iVar1 = **(int **)(_UNK_01027c00 + 0x1027bdc);
    if ((*(int *)(iVar1 + 0x1c) == 0) &&
       (FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4)), *(int *)(iVar1 + 0x1c) == 0)) {
      FUN_00efd7c4(iVar1);
    }
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (piVar11,param_1,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    if (-1 < (int)uVar4) {
      if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__RemoveAtFast_object__14882cc
                (piVar11,uVar4,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0xc));
    }
    return ~uVar4 >> 0x1f;
  }
  if (iVar1 == 0) {
    FUN_00ec3934();
  }
  iVar1 = **(int **)(_UNK_01027bfc + 0x1027bb4);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar3 = *piVar11;
  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar2) {
        puVar9 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xe0);
        goto LAB_01494a00;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar4 != 0);
  }
  puVar9 = (undefined4 *)FUN_00efdb38(piVar11,iVar2,4);
LAB_01494a00:
  uVar4 = (*(code *)*puVar9)(piVar11,param_1,puVar9[1]);
  if (uVar4 == 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar2 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar1) {
          puVar9 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xd0);
          goto LAB_01494a8c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar9 = (undefined4 *)FUN_00efdb38(piVar11,iVar1,2);
LAB_01494a8c:
    (*(code *)*puVar9)(piVar11,param_1,puVar9[1]);
  }
  return uVar4 ^ 1;
}

