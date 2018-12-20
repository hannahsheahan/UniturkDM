﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideOrDisplayReward : MonoBehaviour {

    /// <summary>
    /// ***Not currently used. Used only for 3D object manipulation versions of the 2D DM task.
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: December 2018
    /// </summary>

    public GameObject reward;
    public int rewardIndex;
   
	private void Update()
    {
        // Display or hide the reward location
        switch (rewardIndex)
        {
            case 1:
                // this can be reward-specific, but a better way to do this is to pass the rewardIndex into the GameController reveal function
                reward.SetActive(GameController.control.cueVisible);
                break;

            default:
                reward.SetActive(GameController.control.cueVisible);
                break;
        }
    }
}
