// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.Input
{
    public interface IMixedRealityControllerVisualizer
    {
        /// <summary>
        /// The <see href="https://docs.unity3d.com/ScriptReference/GameObject.html">GameObject</see> reference for this controller.
        /// </summary>
        /// <remarks>
        /// This reference may not always be available when called.
        /// </remarks>
        GameObject GameObjectProxy { get; }

        /// <summary>
        /// The current controller reference.
        /// </summary>
        IMixedRealityController Controller { get; set; }

        // TODO add defined elements or transforms?
    }
}